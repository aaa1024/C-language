#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <cctype>
#include <string>
#include <cstring>
#include <algorithm>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <ctime>
#include <vector>
#include <list>
#include <iomanip>
#include <numeric>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define ms(s) memset(s, 0, sizeof(s))
#define rep(i, n) for (int i=0; i<(n); i++)
#define Rep(i, n) for (int i=1; i<=(n); i++)
#define range(x) (x).begin(), (x).end()
#define read(x) freopen(x, "r", stdin)
#define maxn 1000000
#define LOCAL
int INT = 1000;
struct Dis {
    string path;
    int value;
    bool visit;
    Dis() {
        visit = false;
        value = 0;
        path = "";
    }
};
class Graph_DG {
private:
    int vexnum;   //图的顶点个数
    int edge;     //图的边数
    int **arc;   //邻接矩阵
    Dis * dis;   //记录各个顶点最短路径的信息
public:
    //构造函数
    Graph_DG(int vexnum, int edge){
	    //初始化顶点数和边数
	    this->vexnum = vexnum;
	    this->edge = edge;
	    //为邻接矩阵开辟空间和赋初值
	    arc = new int*[this->vexnum];
	    dis = new Dis[this->vexnum];
	    for (int i = 0; i < this->vexnum; i++) {
	        arc[i] = new int[this->vexnum];
	        for (int k = 0; k < this->vexnum; k++) {
	            //邻接矩阵初始化为无穷大
	                arc[i][k] = INT_MAX;
	        }
	    }
	}
    //析构函数
    ~Graph_DG(){
	    delete[] dis;
	    for (int i = 0; i < this->vexnum; i++) {
	        delete this->arc[i];
	    }
	    delete arc;
	}
    // 判断我们每次输入的的边的信息是否合法
    //顶点从1开始编号
    bool check_edge_value(int start, int end, int weight){
	    if (start<1 || end<1 || start>vexnum || end>vexnum || weight < 0) {
	        return false;
	    }
	    return true;
	}
    //创建图
    void createGraph(){
	    cout << "请输入每条边的起点和终点（顶点编号从1开始）以及其权重" << endl;
	    int start;
	    int end;
	    int weight;
	    int count = 0;
	    while (count != this->edge) {
	        cin >> start >> end >> weight;
	        //首先判断边的信息是否合法
	        while (!this->check_edge_value(start, end, weight)) {
	            cout << "输入的边的信息不合法，请重新输入" << endl;
	            cin >> start >> end >> weight;
	        }
	        //对邻接矩阵对应上的点赋值
	        arc[start - 1][end - 1] = weight;
	        //无向图添加上这行代码
	        //arc[end - 1][start - 1] = weight;
	        ++count;
	    }
	}
    //打印邻接矩阵
    void print(){
	    cout << "图的邻接矩阵为：" << endl;
	    int count_row = 0; //打印行的标签
	    int count_col = 0; //打印列的标签
	    //开始打印
	    while (count_row != this->vexnum) {
	        count_col = 0;
	        while (count_col != this->vexnum) {
	            if (arc[count_row][count_col] == INT_MAX)
	                cout << "∞" << " ";
	            else
	            cout << arc[count_row][count_col] << " ";
	            ++count_col;
	        }
	        cout << endl;
	        ++count_row;
	    }
	}
    //求最短路径
    void Dijkstra(int begin){
	    //首先初始化我们的dis数组
	    int i;
	    for (i = 0; i < this->vexnum; i++) {
	        //设置当前的路径
	        dis[i].path = "v" + to_string(begin) + "-->v" + to_string(i + 1);
	        dis[i].value = arc[begin - 1][i];
	    }
	    //设置起点的到起点的路径为0
	    dis[begin - 1].value = 0;
	    dis[begin - 1].visit = true;

	    int count = 1;
	    //计算剩余的顶点的最短路径（剩余this->vexnum-1个顶点）
	    while (count != this->vexnum) {
	        //temp用于保存当前dis数组中最小的那个下标
	        //min记录的当前的最小值
	        int temp=0;
	        int min = INT_MAX;
	        for (i = 0; i < this->vexnum; i++) {
	            if (!dis[i].visit && dis[i].value<min) {
	                min = dis[i].value;
	                temp = i;
	            }
	        }
	        //cout << temp + 1 << "  "<<min << endl;
	        //把temp对应的顶点加入到已经找到的最短路径的集合中
	        dis[temp].visit = true;
	        ++count;
	        for (i = 0; i < this->vexnum; i++) {
	            //注意这里的条件arc[temp][i]!=INT_MAX必须加，不然会出现溢出，从而造成程序异常
	            if (!dis[i].visit && arc[temp][i]!=INT_MAX && (dis[temp].value + arc[temp][i]) < dis[i].value) {
	                //如果新得到的边可以影响其他为访问的顶点，那就就更新它的最短路径和长度
	                dis[i].value = dis[temp].value + arc[temp][i];
	            //    dis[i].path = dis[temp].path + "-->v" + to_string(i + 1);
	            }
	        }
	    }

	}
    //打印最短路径
    void print_path(int begin){
	    string str;
	    str = "v" + to_string(begin);
	    cout << "以"<<str<<"为起点的图的最短路径为：" << endl;
	    for (int i = 0; i != this->vexnum; i++) {
	        if(dis[i].value!=INT_MAX)
	        cout << dis[i].path << "=" << dis[i].value << endl;
	        else {
	            cout << dis[i].path << "是无最短路径的" << endl;
	        }
	    }
	}
};
bool check(int Vexnum, int edge) {
    if (Vexnum <= 0 || edge <= 0 || ((Vexnum*(Vexnum - 1)) / 2) < edge)
        return false;
    return true;
}
int main() {
    int vexnum; int edge;

    cout << "输入图的顶点个数和边的条数：" << endl;
    cin >> vexnum >> edge;
    while (!check(vexnum, edge)) {
        cout << "输入的数值不合法，请重新输入" << endl;
        cin >> vexnum >> edge;
    }
    Graph_DG graph(vexnum, edge);
    graph.createGraph();
    graph.print();
    graph.Dijkstra(1);
    graph.print_path(1);
    system("pause");
    return 0;
}
