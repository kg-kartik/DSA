#include <bits/stdc++.h>
using namespace std;

int main() {
    long n,m;
	cin>>n>>m;
	
	long arr1[n],arr2[m],i,temp=0,temp1=0;
	
	for(i=0;i<n;i++) {
	    cin>>arr1[i];
	}
	for(i=0;i<m;i++) {
	    cin>>arr2[i];
	}
	
	long min = arr1[0];
    for(i=1;i<n;i++) {
        if(min>arr1[i]) {
            min = arr1[i];
            temp = i;
        }
    }
    
    long max = arr2[0];
     for(i=1;i<m;i++) {
        if(max<arr2[i]) {
            max = arr2[i];
            temp1 = i;
        }
    }
    
    for(i=0;i<m;i++) {
        cout<<temp<<" "<<i<<endl;
    }
    for(i=0;i<n;i++) {
        if(i == temp) {
            continue;
        }
        else {
            cout<<i<<" "<<temp1<<endl;
        }
    }
	return 0;
}
