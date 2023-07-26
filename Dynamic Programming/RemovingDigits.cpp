#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
#define rep(a, b) for(int a = 0; a < (b); ++a)
#define st first
#define nd second
#define pb push_back
#define all(a) a.begin(), a.end()

const int inf = 1e9 + 7;
const int MAX_N = 1e6 + 7;
vector<int> dp(MAX_N,inf);
 
int main(){
	int n; cin >> n;
	dp[n] = 0;
	priority_queue<int> q;
	q.push(-n);
	while(!q.empty()){
		int act = -q.top();
		q.pop();
		int actCopy = akt;
		while(actCopy > 0){
			if(dp[act-(actCopy%10)] > dp[act] + 1){
				dp[act - (actCopy%10)] = dp[act] + 1;
				q.push(-(act-(actCopy%10)));
			}
			actCopy/=10;
		}
	}
	cout << dp[0];
	return 0;
}
