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
#include <fstream>
#include <list>
#include <iomanip>
#include <numeric>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define ms(s) memset(s, 0, sizeof(s))
const int inf = 0x3f3f3f3f;
#define LOCAL


struct rectangle
{	
	int w;
	int h;
};

int main(int argc, char * argv[]) 
{
    rectangle a[10];
    while(cin >> a[0].w >> a[0].h)
    {
    	int cnt = 0;
    	int marka, markb, markc;
    	rectangle b[10];
    	for (int i = 1; i < 6; i++)
    	{
    		cin >> a[i].w >> a[i].h;
    	}

    	for (int i = 0; i < 6; i++)
    	{
    		if (a[i].w > a[i].h)
    		{
    			swap(a[i].w, a[i].h);
    		}
    	}
    	for (int i = 0; i < 6; i++)
    	{
    		for (int j = i + 1; j < 6; j++)
    		{
        	    if(a[i].w == a[j].w && a[i].h == a[j].h)
    	    	{
    				b[cnt].w = a[i].w;
    				b[cnt++].h = a[i].h;
     			}
    		}
    	}
    	if (cnt != 3)
    	{
    		cout << "IMPOSSIBLE" << endl;
    		continue;
    	}

    	for (int i = 0; i < 3; i++)
    	{
    		for (int j = i + 1; j < 3; j++)
    		{
    			if(b[i].w == b[j].w)
    			{
    				marka = i;
    				markb = j;
    			}
    		}
    	}
    	for (int i = 0; i < 3; i++)
    	{
    		if (i != marka && i != markb)
    		{
    			markc = i;
    		}
    	}
    	if((b[marka].h == b[markc].w && b[markb].h == b[markc].h) || (b[marka].h == b[markc].h && b[markb].h == b[markc].w))
    	{
    		cout << "POSSIBLE" << endl;
    	}
    	else
    	{
    		cout << "IMPOSSIBLE" << endl;
    	}
    }
    return 0;
}