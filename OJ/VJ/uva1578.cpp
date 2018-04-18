#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
pair <int, int> a[6];
int main(int argc, char * argv[]) 
{
    while(cin >> a[0].first >> a[0].second)
    { 
        for (int i = 0; i < 6; i++)
        {
            if (i)
                cin >> a[i].first >> a[i].second;
            if(a[i].first > a[i].second) swap(a[i].first, a[i].second );
        }
        sort(a, a + 6);
        puts(a[0].first == a[2].first && a[2].second == a[4].second && a[4].first == a[0].second 
            && a[0] == a[1] && a[2] == a[3] && a[4] == a[5]?"POSSIBLE":"IMPOSSIBLE");
    }
    return 0;
}