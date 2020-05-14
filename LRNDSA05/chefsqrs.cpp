#include <bits/stdc++.h>
using namespace std;

int main() {
	long long t,i,u,v;
	cin>>t;
	while(t--) {
	    int n;
	    cin>>n;
	    int result = -1;
	    for(i=1;i<=sqrt(n);i++) {
	        if(i!= n/i && n%i == 0) {
	           u = (n/i+i)/2;
	           v = (n/i-i)/2;
	           if(n+v*v == u*u) {
	               result = v*v;
	           }
	        }
	    }
	    cout<<result<<endl;
	}
}
