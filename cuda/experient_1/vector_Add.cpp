#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>
using namespace std;
#define maxn 1000
void vectorAdd(const double *A, const double *B, double *C, const int N){
	for (int i = 0; i < N; i++){
		C[i] = A[i] + B[i];
	}
}

__global__ void vectorAdd2(const double *A, const double *B, double *C, int N){
	for (int i = 0; i < N; i++){
		C[i] = A[i] + B[i];
	}
}

__global__ void vectorAdd3(const double *A, const double *B, double *C, int N){
	int i = threadIdx.x;
//	printf("in vectorAdd3:%d", i);
	if (i < N){
		C[i] = A[i] + B[i];
	}
}
__global__ void vectorAdd4(const double *A, const double *B, double *C, int N){
	int i = blockIdx.x * blockDim.x + threadIdx.x;
	if (i < N){
		C[i] = A[i] + B[i];
	}
}
void init(double *a, int N){
	for (int i = 0; i < N; i++){
		a[i] = rand() % 100;
	}
}
void output(double *a, int N){
	for (int i = 0; i < N; i++){
		printf("%lf ", a[i]);
	}
	printf("\n");
}
void check(double *a, double *b, int n){
	double sum = 0;
	for (int i = 0; i < n; i++){
		sum += (a[i] - b[i]) * (a[i] - b[i]);
	}
	printf("%lf ", sum);
	if (sum == 0){
		cout << "vector a is equal to vector b" << endl;
	}
	else{
		cout << "vector a is not equal to vector b" << endl;
	}
}
int main(int argc,char *argv[]){
	// argv[0]代表文件名
	// argv[1]代表传进来的第一个参数
	// atoi将字符串转换成int
	int N = 1024;
	srand(time(NULL));
	// 1. GPU版数组相加
	double *a = new double[N];
	double *b = new double[N];
	double *c = new double[N];
	// a, b是两个加数，c是CPU的运算结果.
	// 调用CPU版一维数组的相加
	init(a, N); // 初始化
	init(b, N);
	vectorAdd(a, b, c, N);

	// 2. GPU单线程版数组相加	
	double *da2, *db2, *dc2, *c2;
	// 分配内存
	cudaMalloc(&da2, sizeof(double) * N);
	cudaMalloc(&db2, sizeof(double) * N);
	cudaMalloc(&dc2, sizeof(double) * N);
	// 拷贝内存
	cudaMemcpy(da2, a, sizeof(double) * N, cudaMemcpyHostToDevice);
	cudaMemcpy(db2, b, sizeof(double) * N, cudaMemcpyHostToDevice);
	// 调用GPU单线程版
 	vectorAdd2<<<1, 1>>>(da2, db2, dc2, N);
	// 将结果拷贝到本地的c2
	c2 = new double [N];
	cudaMemcpy(c2, dc2, sizeof(double) * N, cudaMemcpyDeviceToHost);
	// 检测结果
	check(c2, c, N);
	// 释放内存
	cudaFree(da2);
	cudaFree(db2);
	cudaFree(dc2);
	delete [] c2;

	// 3. GPU单block多线程版
	// 分配内存
	double *da3, *db3, *dc3, *c3;
	cudaMalloc(&dc3, sizeof(double) * N);
	c3 = new double [N];
	// 初始化参数
	init(a, N);
	init(b, N);
	// 调用CPU版
	vectorAdd(a, b, c, N);
	// 分配内存
	cudaMalloc(&da3, sizeof(double) * N);
	cudaMalloc(&db3, sizeof(double) * N);
	cudaMalloc(&dc3, sizeof(double) * N);
	// 拷贝内存
	cudaMemcpy(da3, a, sizeof(double) * N, cudaMemcpyHostToDevice);
	cudaMemcpy(db3, b, sizeof(double) * N, cudaMemcpyHostToDevice);
	// 调用GPU多线程版
	vectorAdd3<<<1, N>>>(da3, db3, dc3, N);
	cudaMemcpy(c3, dc3, sizeof(double) * N, cudaMemcpyDeviceToHost);
	// 校验结果
	check(c3, c, N);
	// 释放本次小实验分配的内存
	delete [] c3;
	cudaFree(da3);
	cudaFree(db3);
	cudaFree(dc3);
	
	// 4. 多block多线程版
	// 分配内存
	double *da4, *db4, *dc4, *c4;
	cudaMalloc(&da4, sizeof(double) * N);
	cudaMalloc(&db4, sizeof(double) * N);
	cudaMalloc(&dc4, sizeof(double) * N);
	c4 = new double [N];
	// 初始化参数
	init(a, N);
	init(b, N);
	// 用CPU版本计算正确答案
	vectorAdd(a, b, c, N);
	// 拷贝内存
	cudaMemcpy(da4, a, sizeof(double) * N, cudaMemcpyHostToDevice);
	cudaMemcpy(db4, b, sizeof(double) * N, cudaMemcpyHostToDevice);
	// 调用多block多线程版的vectorAdd();
	int threads = atoi(argv[1]);
	int block = (N - 1) / threads + 1;
	vectorAdd4<<<block, threads>>>(da4, db4, dc4, N);
	// 拷贝运算结果
	cudaMemcpy(c4, dc4, sizeof(double) * N, cudaMemcpyDeviceToHost);
	// 校验结果
	check(c, c4, N);
	// 释放所有内存
	delete [] a;
	delete [] b;
	delete [] c;
}
