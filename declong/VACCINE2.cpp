#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n,d,i,count=0,count1=0,result=0;
        cin>>n>>d;
        
        int arr[n];
        
        for(i=0;i<n;i++) {
            cin>>arr[i];
        }
        for(i=0;i<n;i++) {
            if(arr[i] >=80 || arr[i] <=9) {
                count++;
            }
        }

        count1 = n - count;

        if(count % d != 0) {
            count = count/d+1;
        }
        else {
            count = count/d;
        }

        if(count1 % d != 0) {
            count1 = count1/d+1;
        }
        else {
            count1 = count1/d;
        }
        
        if(d==1) {
            result = n;
        }
        else {
            result = count1+count;
        }

        cout<<result<<endl;
    }
}