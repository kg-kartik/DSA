#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        long long a,b,eveno=0,event=0,oddo=0,oddt=0,sum=0;
        cin>>a>>b;
        eveno = a/2;
        event = b/2;
        oddo = (a+1)/2;
        oddt = (b+1)/2;
        sum = eveno*event+oddo*oddt;
        cout<<sum<<endl;
    }
}