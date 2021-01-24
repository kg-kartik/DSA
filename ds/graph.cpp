#include <bits/stdc++.h>
using namespace std;
int main()
{

    //n- no of vertices

    vector<int> result;
    int e;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            e = max(arr[i], arr[j]);
        }
        //Eccentries of all vertices
        result.push(e);
    }

    //Radius min of all eccentricities
    for (int i = 0; i < result.size(); i++)
    {
        int radius = min(radius, result[i]);
        int distance = max(distance, result[i]);
    }
}
