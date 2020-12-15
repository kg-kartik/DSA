#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        long long n,k,i,counter=0,count=0;
        cin>>n>>k;
        long long arr[n];
        
        for(i=0;i<n;i++) {
            arr[i] = i+1;
        }

        if(n % 2 == 0) {
            count = n/2;
            for(i=0;i<n;i++){
                if((i+1) % 2 != 0){
                    arr[i] = -arr[i];
                }
            }
        }
        
        else {
            count = (n+1)/2;
            for(i=0;i<n;i++) {
                if((i+1) %2 == 0) {
                    arr[i] = -arr[i];
                }
            }
        }

        for(i=n;i>=0;i--) {
            if(count < k) {
                if(arr[i] < 0) {
                    counter++;
                    arr[i] = -arr[i];
                    if(counter == (k-count) ){
                        break;
                    }
                }
            }

            else if(count > k) {
                if(arr[i] > 0) {
                    counter++;
                    arr[i] = -arr[i];
                    if(counter == (count-k)) {
                        break;
                    }
                }
            }
            else {
                break;
            }
        }

        for(i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";   
        }
        cout<<endl;
    }
}