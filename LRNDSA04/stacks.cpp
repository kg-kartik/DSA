#include<bits/stdc++.h>
using namespace std;

int main() {
	int t,i;
	cin>>t;
	while(t--) {
	    vector<int> v;
	    int n;
	    cin>>n;
	    int arr[n];
	    for(i=0;i<n;i++) {
	        cin>>arr[i];
	    }
	    for(i=0;i<n;i++) {
	        int index = upper_bound(v.begin(),v.end(),arr[i])-v.begin();
	        if(index >= v.size()) {
	            index  = v.size();
	            v.push_back(arr[i]);
	        }
	        else {
	            v[index] = arr[i];
	        }
	    }
	    cout<<v.size()<<" ";
	    for(i=0;i<v.size();i++) {
	        cout<<v[i]<<" ";
	    }
	    cout<<endl;
	}
	
}
