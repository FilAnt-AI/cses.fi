#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
#define rep(a, b) for(int a = 0; a < (b); ++a)
#define st first
#define nd second
#define pb push_back
#define all(a) a.begin(), a.end()
const int mod = 1e9 + 7;
const int MAX_N = 1e6 + 100;
vector<ll> dp(MAX_N);
 
int main(){
	int n; cin >> n;
	dp[0] = 1;
	rep(i,n+1){
		rep(j,6){
			dp[i+j+1] += dp[i];
			dp[i+j+1] %= mod;
		}
	}
	cout << dp[n];
	return 0;
}
