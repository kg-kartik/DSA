#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
		int target;
		cin>>target;
		int dp[target+1];
		memset(dp,0,sizeof(dp));
		dp[0] = 1;
		int numbers[] = {2,3};
		
		for(int i=0;i<2;i++) {
			for(int j=numbers[i];j<=target;j++) {
				dp[j] = dp[j] + dp[j-numbers[i]];
			}
		}
		
		cout<<dp[target]<<endl;
	}
}