#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000009
#define ll long long
ll n,k,dp[1000][9000];
	int main (){
		ios_base::sync_with_stdio(0);
		cin.tie(0);
		cin>>n>>k;
		int i,j,uso;
		dp[0][0]=1;
		for(i=1;i<=n;i++){
			for(j=0;j<=k;j++){
				for(uso=0;uso<=9&&j-uso>=0;uso++){
					dp[i][j]+=dp[i-1][j-uso]%MOD;
				}
			}
		}
		cout << dp[n][k]<<"\n";
	}
