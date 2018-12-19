#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <map>
using namespace std;
#define maxn 300
int n;
pair<string, int> p[maxn];
bool cmp(const pair<string,int> &a,const pair<string,int> &b)
{
    return a.first.size() < b.first.size();
}
// s是否是t的前缀
bool isPrefix(string s, string t){
    for (int i = 0; i < (int)s.size(); i++){
        if (s[i] != t[i]){
            return false;
        }
    }
    return true;
}
// s是否是t的后缀
bool isSuffixes(string s, string t){
    for (int i = (int)s.size() - 1, j = (int)t.size() - 1; i >= 0 && j >= 0; i--, j--){
        if (s[i] != t[j]){
            return false;
        }
    }
    return true;
}
void solve(string S){
    char ans[maxn];
    for (int i = 1; i <= n; i += 2){
        if (isSuffixes(p[i].first, S) && isPrefix(p[i + 1].first, S)){
            ans[p[i].second] = 'S';
            ans[p[i + 1].second] = 'P';
            continue;
        }
        if (isSuffixes(p[i + 1].first, S) && isPrefix(p[i].first, S)){
            ans[p[i].second] = 'P';
            ans[p[i + 1].second] = 'S';
            continue;
        }
        return;
    }
    for (int i = 1; i <= n; i++){
        cout << ans[i];
    }
    cout << endl;
    exit(0);
}
int main(){
    int m;
    std::vector<string> a; // 存放一个字符的字符串
    std::vector<string> b; //存放m - 1个字符的字符串
    cin >> m;
    n = m * 2 - 2;
    for (int i = 1; i <= n; i++){
        cin >> p[i].first;
        p[i].second = i;
    }
    sort(p + 1, p + 1 + n, cmp);
    solve(p[1].first + p[n - 1].first);
    solve(p[1].first + p[n].first);
    solve(p[2].first + p[n - 1].first);
    solve(p[2].first + p[n].first);
    return 0;
}

/*
babab
*/