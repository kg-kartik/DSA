#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int freq[26] = {0}, i = 0, count1 = 0, count = 0, result = 0;
        for (i = 0; i < s.length(); i++)
        {
            freq[s[i] - 'a']++;
        }
        for (i = 0; i < 26; i++)
        {
            if (freq[i] != 0)
            {
                if (freq[i] % 2 == 0)
                {
                    count = count + (freq[i]) / 2;
                }
            }
        }

        for (i = 0; i < 26; i++)
        {
            if (freq[i] != 0)
            {
                if (freq[i] % 2 != 0)
                {
                    count1 = (freq[i]) / 2;
                }
                if (count > 0)
                {
                    count--;
                    result++;
                    count = count + count1;
                }
                else
                {
                    break;
                }
            }
        }
        cout << result << endl;
    }
}