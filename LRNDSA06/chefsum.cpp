#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n,i,min;
	  cin>>n;
	  int arr[n];
	  for(i=0;i<n;i++) {
	      cin>>arr[i];
	  }
	  min = arr[0];
	  int ans =0;
	  for(i=1;i<n;i++) {
	      if(arr[i] < min) {
	          min = arr[i];
	          ans = i;
	      }
	  }
	  cout<<ans+1<<endl;
	}
}
