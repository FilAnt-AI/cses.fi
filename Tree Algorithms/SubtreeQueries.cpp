#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
#define rep(a, b) for(int a = 0; a < (b); ++a)
#define st first
#define nd second
#define pb push_back
#define all(a) a.begin(), a.end()
const int base = 1 << 20;
const int MAX_N = 1e6 + 7;
vector<int> G[MAX_N];
vector<bool> vist(MAX_N);
vector<pair<int,int>> preMaxMin(MAX_N);
vector<ll> tree(2*base);
int preCnt = 1;
 
void countPre(int v){
	vist[v] = true;
	preMaxMin[v].st = preCnt;
	preMaxMin[v].nd = preCnt;
	preCnt++;
	
	for(int u : G[v])
		if(!vist[u]){
			countPre(u);
			preMaxMin[v].nd = max(preMaxMin[v].nd, preMaxMin[u].nd);	
		}
}
 
void upd(int x, int val){
	x = preMaxMin[x].st + base;
	val -= tree[x];
	while(x > 0){
		tree[x] += val;
		x/=2;
	}
}
 
long long query(int l, int r){
	l += base;
	r += base;
	ll sum = 0;
	while(l <= r && r != 0 && l != 0){
		if(l%2 == 1) sum += tree[l];
		if(r%2 == 0) sum += tree[r];
		r = (r-1)/2;
		l = (l+1)/2;
	}
	return sum;
}
 
int main(){
	ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	int n, q; cin >> n >> q;
	vector<int> startVal(n+7);
	for(int i = 1; i <= n; i++) cin >> startVal[i];
	rep(i,n-1){
		int a, b; cin >> a >> b;
		G[a].pb(b);
		G[b].pb(a);
	}
	countPre(1);
	for(int i = 1; i <= n; i++) upd(i, startVal[i]);
	while(q--){
		int type, s; cin >> type >> s;
		if(type == 1){
			int x; cin >> x;
			upd(s, x);
		}
		else cout << query(preMaxMin[s].st, preMaxMin[s].nd) << "\n";
	}
	return 0;
}
