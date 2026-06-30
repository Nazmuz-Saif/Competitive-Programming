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
        string s = to_string(n);
        int zoro = s.length() - 1;
        string ans = "";
        ans += "1";
        for (int i = 0; i < zoro; i++)
        {
            ans += "0";
        }
        ans += "1";
        cout << ans << endl;

    }
}