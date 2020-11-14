#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t, i, p;
    cin >> t;

    long long limit = 1000000;
    vector<long long> result;

    bool prime[limit + 1];
    memset(prime, true, sizeof(prime));

    for (p = 2; p * p <= limit; p++)
    {
        if (prime[p] == true)
        {
            for (i = p * p; i <= limit; i += p)
            {
                prime[i] = false;
            }
        }
    }

    for (p = 2; p <= limit; p++)
    {
        if (prime[p] == true)
        {
            result.push_back(p);
        }
    }

    while (t--)
    {
        long long n, x;
        cin >> n;

        vector<long long> v;
        vector<long long> output;

        for (i = 0; i < n; i++)
        {
            cin >> x;
            v.push_back(x);
        }

        for (i = 0; i < n; i++)
        {
            output.push_back(result[i]);
        }

        for (i = 0; i < n; i++)
        {
            output[i] = output[v[i] - 1];
        }

        for (i = 0; i < n; i++)
        {
            cout << output[i] << " ";
        }
        cout << endl;
    }
}