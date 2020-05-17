#include<bits/stdc++.h>
using namespace std;

int main() {
		int t,i,n,p,j;
	cin>>t;
	while(t--) {
	    cin>>n;
	    bool prime[n+1];
	    vector<int>v;
	    memset(prime,true,sizeof(prime));
	    for(p=2;p*p<=n;p++) {
	        if(prime[p]) {
	            for(i=p*p;i<=n;i=i+p) {
	                prime[i]=false;
	            }
	        }
	    }
	    //Pushing all the prime nos less than n to vector
	    for(p=2;p<=n;p++){
	        if(prime[p]) {
	            v.push_back(p);
	        }
	    }
	    int len = v.size();
	    vector<int>v1;
	    for(i=0;i<len;i++) {
	        for(j=0;j<len;j++) {
	            v1.push_back(v[i]*v[j]);
	        }
	    }
	    int len1=v1.size();
	    string ans= "N0";
	    for(i=0;i<len1;i++) {
	        for(j=0;j<len1;j++){
	            if(v1[i]+v1[j] == n) {
	                ans = "Yes";
	                goto result;
	            }
	        }
	    }
	    result: cout<<ans<<endl;
	}
}
