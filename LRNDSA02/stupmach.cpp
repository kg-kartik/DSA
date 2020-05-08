#include <bits/stdc++.h>
using namespace std;

int main(void) {
    long long t,n,i,count=0,min;
    cin>>t;
    while(t--) {
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        min = arr[0];
        for(i=1;i<n;i++){
            if(min > arr[i]) {
                min = arr[i];
            }
        }
        for(i=0;i<n;i++){
            arr[i] = arr[i]-min;
            count =count +min;
        }
        while(arr[0] != 0){
            for(i=0;i<n;i++){
                if(arr[i]==0){
                    break;
                }
                arr[i] = arr[i]-1;
                count++;
            }
        }
        cout<<count<<endl;
        count=0;
    }
    
}