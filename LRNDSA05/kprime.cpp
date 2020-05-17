#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
	cin>>t;
	while(t--) {
	    int count=0;
	    int a,b,k,p,i,n,f;
	    cin>>a>>b>>k;
	    int prime[b-a+1];
	    memset(prime,-1,sizeof(prime));
	    for(n=a;n<=b;n++) {
	        
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
	        s.insert(prime[n]);
	       while(n>1) {
	           f = n/prime[n];
	           n = n/prime[n];
	           s.insert(f);
	       }
	       if(s.size() >= k) {
	           count++;
	       }
	    }
	    cout<<count;
	    count=0;
	}
}