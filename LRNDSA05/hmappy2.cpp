#include <iostream>
using namespace std;

int main() {
    long long t,n,a,b,k,i;
    cin>>t;
    while(t--) {
        long long count = 0;
        cin>>n>>a>>b>>k;
        for(i=1;i<=n;i++) {
            if((i%a ==0 && i%b != 0) || (i%b ==0 && i%a != 0)){
                count++;
            }
        }
        if(count>=k){
            cout<<"Win"<<endl;
        }
        else {
            cout<<"Lose"<<endl;
        }
    }
}
