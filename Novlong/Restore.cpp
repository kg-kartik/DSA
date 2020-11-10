#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, i, x;
        cin >> n;

        vector<long long> v;
        vector<long long> result;

        for (i = 0; i < n; i++)
        {
            cin >> x;
            v.push_back(x);
        }

        long long limit = 1000000;

        bool prime[limit + 1];
        memset(prime, true, sizeof(prime));

        for (int p = 2; p * p <= limit; p++)
        {
            if (prime[p] == true)
            {
                for (i = p * p; i <= limit; i += p)
                {
                    prime[i] = false;
                }
            }
        }

        for (int p = 2; p <= limit; p++)
        {
            if (prime[p] == true)
            {
                result.push_back(p);
            }
        }

        for (i = 0; i < n; i++)
        {
            if (v[i] != i + 1)
            {
                result[i] = result[n - 1];
            }
        }

        for (i = 0; i < n; i++)
        {
            cout << result[i] << " " << endl;
        }
    }
}