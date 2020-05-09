#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,z,i,count=0,a;
	cin>>t;
	while(t--) {
	    priority_queue <int> P;
	    cin>>n;
	    cin>>z;
	    for(i=0;i<n;i++) {
	        cin>>a;
	        P.push(a);
	    }
	    count=0;
        while(P.top()>0 && z>=0) {
            z = z -P.top();
            P.push(floor(P.top()/2));
            P.pop();
            count++;
        }
        if(z>0) {
            cout<<"Evacuate"<<endl;
        }
        else {
            cout<<count<<endl;
        }
	}
	return 0;
}
