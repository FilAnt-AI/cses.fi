#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
#define rep(a, b) for(int a = 0; a < (b); ++a)
#define st first
#define nd second
#define pb push_back
#define all(a) a.begin(), a.end()
 
const int MAX_N = 1e6 + 7;
vector<int> a(MAX_N);
 
int main(){
	ll n; cin >> n;
	rep(i,n-1){
		int b; cin >> b;
		a[b] = 1;
	}
	rep(i,n)
		if(a[i+1] == 0) cout << i+1;
	
	return 0;
}
