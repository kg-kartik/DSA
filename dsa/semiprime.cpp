#include<bits/stdc++.h>
using namespace std;
int main() {
    int t,i,p,j;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        bool prime[n+1];
        vector <int> v;
        memset(prime,true,sizeof(prime));
        for(p=2;p*p<=n;p++) {
            if(prime[p] == true) {
                for(i= p*p;i<=n;i=i+p) {
                    prime[i] = false;
                }
            }
        }
        //Pushing all the prime nos less than n to vector
        for(p=2;p<=n;p++) {
            if(prime[p] == true) {
                v.push_back(p);
            }
        }

        for(i=0;i<v.size();i++) {
            cout<<v[i];
        }
    }
}