#include <stdio.h>
#include <string.h>
/*
算法思想就是找到一个最大的k, 使得字符串的前k个元素和后k个元素相等。
*/
int main(){
	char s[1000];
	scanf("%s", s);
	int len = strlen(s); // 字符串长度
	int k = len - 1;
	while (k >= 0){
		int flag = 1;
		for (int i = 0; i < k; i++){
			if (s[i] == s[len - k + i]){ 
			//s[i]代表前k个
			//s[len - k + i]代表后k个
			//一一枚举，如果相等就继续判断下一个
				continue;
			}
			else{
				k--;//如果不等，就说明这个k不行了，得把k取小一点
				flag = 0;//表示k取当前值失败
				break;
			}
		}
		//如果取到k - 1个都完全相等，就会一直continue，不会break
		//flag = 0不会被执行
		if (flag == 1){
			break;
		}
	}
//	printf("%d\n", k);
	printf("%s", s);//先输出它本身
	//再输出它的后k个
	for (int i = k; i < len; i++){
		printf("%c", s[i]);
	}
	printf("\n");
	return 0;
}
