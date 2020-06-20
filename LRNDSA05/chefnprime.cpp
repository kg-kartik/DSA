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
        
        int len = v.size();
        vector<int> v1;
        
        for(i=0;i<len;i++) {
            for(j=i+1;j<len;j++) {
                v1.push_back(v[i]*v[j]);
            }
        }
        
        int len1 = v1.size();
        string ans = "NO";
        for(i=0;i<len1;i++) {
            for(j=0;j<len1;j++){
                if(v1[i]+v1[j] == n) {
                    ans = "YES";
                    goto result;
                }
            }
        }
        result: cout<<ans<<endl;
    }
}
