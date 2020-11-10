#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i, x = 0, tv = 0, result = 0, minimum = 0, y = 0;
        int one = 0, diff = 0, two = 0, three = 0;
        cin >> n;
        vector<int> v;
        for (i = 0; i < n; i++)
        {
            cin >> tv;
            v.push_back(tv);
        }

        sort(v.begin(), v.end(), greater<int>());
        x = v[0];
        if (n == 1)
        {
            result = v[0];
        }
        if (n == 2)
        {
            result = max(v[0], v[1]);
        }
        if (n == 3)
        {
            result = v[1] + max(v[2], v[0] - v[1]);
        }
        if (n == 4)
        {
            one = v[1];
            diff = v[0] - v[1];
            two = min(diff, v[2]);
            three = max(v[3], abs(v[2] - diff));
            result = one + two + three;
        }
        cout << result << endl;
    }
}