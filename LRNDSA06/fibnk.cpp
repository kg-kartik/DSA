#include<bits/stdc++.h>
using namespace std;

int fib(int k) {
    int f[k+2];
    f[0] = 0;
    f[1] = 1;
    for(int i=2;i<k;i++) {
        f[i] = f[i-1]+f[i-2];
    }
    return f[k];
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n,k,i,sum=0;
        cin>>n>>k;
        for(i=0;i<k;i++){
            sum = sum+fib(k);
            cout<<sum<<endl;
        }
    }
}

