#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	vector<int> v1;
	int n,s,p,v,dis=0,i;
	cin>>t;
	while(t--) {
	    cin>>n;
	    for(i=0;i<n;i++) {
	        cin>>s>>p>>v;
	        s++;
	        dis = p/s;
	        dis = dis*v;
	        v1.push_back(dis);
	    }
	    int max = v1[0];
	    for(i=1;i<v1.size();i++)
	    {   
	        if(max < v1[i]) {
	        max = v1[i];
	        }
	    }
	    cout<<max;
	}
}
