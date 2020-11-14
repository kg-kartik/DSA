#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, i;
        cin >> n >> k;
        // char x;
        // vector<char> v;
        // for (i = 0; i < v.size(); i++)
        // {
        //     cin >> x;
        //     v.push_back(x);
        // }
        char v[n];
        for (i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (i = 0; i < n; i++)
        {
            if (v[i] == 'M')
            {
                cout << i << endl;
            }
        }
    }
}