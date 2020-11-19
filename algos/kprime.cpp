#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
	    int count=0;
	    int a,b,k,p,i,n,f;
	    cin>>a>>b;

	    for(n=a;n<=b;n++) {
        
            int prime[n];
	        memset(prime,-1,sizeof(prime));

	        for(p=2;p*p<=n;p++) {
	            if(prime[p] == -1) {
	                for(i=p*p;i<=n;i+=p) {
	                    prime[i] = p;
	                }
	            }
	        }
	        
	        for(i=2;i<=n;i++) {
	            if(prime[i] == -1) {
	                prime[i] = i;
	            }
	        }

	        set<int>s;
	        while(n>1) {
	           s.insert(prime[n]);
               cout<<prime[n]<<"\t";
               n = n/prime[n];
	        }
            cout<<endl;
	    }

	}
}