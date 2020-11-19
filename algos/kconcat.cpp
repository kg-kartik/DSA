#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n,k,i,j;
        cin>>n>>k;
        int arr[n];
        for(i=0;i<n;i++) {
            cin>>arr[i];
        }

        vector<int> b;
        for(i=0;i<k;i++) {
            for(j=0;j<n;j++) {
                b.push_back(arr[j]);
            }
        }

        int max_current,max_global;
        max_current = max_global = b[0];

        for(i=0;i<b.size();i++) {
            max_current = max(b[i],max_current+b[i]);
            if(max_current > max_global) {
                max_global = max_current;
            }
        }
        cout<<max_global<<endl;
    }
}