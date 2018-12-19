#include <iostream>
#include <cstdio>
#include <list>
#include <cstring>
#include <queue>
using namespace std;

#define maxn 1000

list<int> G[maxn];
bool visit[maxn];
int flag = 0; // flag为0代表从v1到v2长度为k的边没有找到
// 用一个邻接链表来存图
// 添加边的函数
// 因为这是无向图所以只需要在对应的链表上添加函数即可
void add(int p, int q){
    G[p].push_back(q);
    G[q].push_back(p);
}

void dfs(int start){
    // 标记当前点已经访问过
    visit[start] = 1;
    // 访问当前点
    cout << start << " ";
    // 遍历与当前点相邻的所有点，如果它没被访问过则访问它
    for (list<int>::iterator it = G[start].begin(); it != G[start].end(); ++it){
        if (!visit[*it]){
            dfs(*it);
        }
    }
}
void bfs(int start){
    // 先建一个队列
    queue<int> q;
    // 把起点推进去
    q.push(start);
    // 初始化一下标记数组
    memset(visit, 0, sizeof(visit));
    while (!q.empty()){
        // 取出队首元素
        int t = q.front();
        // 访问队首元素
        cout << t << " ";
        visit[t] = 1;
        q.pop();
        // 遍历所有当前元素的，如果它没被访问过，则推入栈
        for (list<int>::iterator it = G[t].begin(); it != G[t].end(); ++it){
            if (!visit[*it]){
                visit[*it] = 1;
                q.push(*it);
            }
        }
    }
    cout << endl;
}
void simple_path_dfs(int v1, int v2, int k, int cur, int *step){
    // v1是起点，v2是终点，k是路径的长度，cur是当前步数，step是存路径的数组
    // 每次都更新v1就好了，不用更新v2
    // k也不用更新，只更新cur
    step[cur] = v1;
    if (v1 == v2 && cur == k){
        flag = 1;
        for (int i = 0; i <= k; i++){
            cout << step[i] << " ";
        }
        cout << endl;
        return;
    }
    if (cur == k){
        return;
    }
    for (list<int>::iterator it = G[v1].begin(); it != G[v1].end(); ++it){
        if (!visit[*it]){
            visit[*it] = 1;
            simple_path_dfs(*it, v2, k, cur + 1, step);
            visit[*it] = 0;
        }
    }
}
void simple_path(int v1, int v2, int k){
    int step[maxn];
    flag = 0;
    // v1是起点，v2是终点.
    memset(visit, 0, sizeof(visit));
    step[0] = v1;
    simple_path_dfs(v1, v2, k, 0, step);
    if (flag == 0){
        cout << "have not found the path from v1 to v2 that its length is k" << endl;
    }
}
int main(){
    int n, m; // n个点m条边
    int p, q; //临时变量
    while (cin >> n >> m){
        memset(visit, 0, sizeof(visit));
        for (int i = 1; i <= m; i++){
            cin >> p >> q;
            // 从p到q的无向边
            add(p, q);
        }
        cout << "dfs" << endl;
        dfs(1);
        cout << endl;
        cout << "bfs" << endl;
        bfs(1);
        int v1, v2, k;
        cin >> v1 >> v2 >> k;
        cout << "path from v1 to v2 that its length is k" << endl;
        simple_path(v1, v2, k);
    }
}