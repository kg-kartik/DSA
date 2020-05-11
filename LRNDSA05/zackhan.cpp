#include <iostream>
using namespace std;

int gcd(int a, int b) {
    return b==0 ? a : gcd(b,a%b) ;
}

int main() {
    int t,l,b;
    cin>>t;
    while(t--) {
        cin>>l>>b;
        cout<<gcd(l,b)<<endl;
    }
}
