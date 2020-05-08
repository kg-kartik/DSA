#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int j,count=-1;
	    string str;
	    cin>>str;
	    int len = str.length();
	    stack <char> s;
	    for(j=0;j<len;j++){
	        if(str[j] == '<'){
	            s.push(str[j]);
	        }
	        else {
	            if(!s.empty()) {
	                s.pop();
	                if (s.empty()) {
	                    count = j;
	                }
	            }
	            else {
	                break;
	            }
	        }
	    }
	    cout<<count+1<<endl;
	}
	return 0;
}
