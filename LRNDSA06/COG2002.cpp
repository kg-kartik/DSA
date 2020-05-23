#include <bits/stdc++.h>
using namespace std;

int main() {
	long t;
	cin>>t;
	while(t--) {
	    long long n,i,j,window_sum=0,max_sum=0;
	    cin>>n;
	    long long arr[n];
	    for(i=0;i<n;i++) {
	        cin>>arr[i];
	    }
	    max_sum = arr[0]+arr[1]+arr[2];
	    window_sum = max_sum;
	    for(i=3;i<n;i++) {
	        window_sum = window_sum +arr[i] - arr[i-3];
	        max_sum = max(max_sum,window_sum);
	    }
	    cout<<max_sum<<endl;
	}
}
