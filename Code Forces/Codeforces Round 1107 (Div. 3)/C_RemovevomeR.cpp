#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int blocks = 1;
        string s;
        cin >> s;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] != s[i + 1])
            {
                blocks++;
            }
        }
        // cout << "blocks: " << blocks << endl;
        if(blocks == 1)
        {
            cout << "1" << endl;
        }
        else if (blocks == 2)
        {
            cout << "2" << endl;
        }
                        else
                        {
                            cout << "1" << endl;
                        }
    }
}