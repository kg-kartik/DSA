#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, sum = 0;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            sum = sum + arr[i];
        }
        if (sum % k == 0 )
        {
            cout << "0";
        }
        else
        {
            cout << "1";
        }
        cout << endl;
    }
}