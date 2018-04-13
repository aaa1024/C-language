#include <iostream>
using namespace std;
bool judge(int a, std::string s)
{
    for (int i = 0; i < s.size() - a; i++)
    {
        if (s[i] != s[i + a])
        {
            return false;
        }
    }
    if (s.size() % a == 0)
        return true;
    else
        return false;
}
int main() {
    int n;
    cin >> n;
    while (n--)
    {
        int flag = 1;
        string s;
        cin >> s;
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] == s[0])
            {
                if(judge(i, s))
                {
                    if (n)
                        cout << i << endl << endl;
                    else
                        cout << i << endl;
                    flag = 0;
                    break;
                }
            }
        }

        if(flag)
        {
            if (n)
                cout << s.size() << endl << endl;
            else
                cout << s.size() << endl;
        }
    }
    return 0;
}