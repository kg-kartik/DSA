#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0;
        cin >> n;
        string s, p, result;
        cin >> s;
        cin >> p;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != p[i])
            {
                count++;
            }
        }
        cout << count;
        if (count % 2 != 0)
        {
            result = "NO";
        }
        else
        {
            result = "YES";
        }
        if (count == 0)
        {
            result = "YES";
        }
        cout << result << endl;
    }
}