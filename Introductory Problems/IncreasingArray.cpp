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
	int n; cin >> n;
	rep(i,n) cin >> a[i];
	ll sum = 0;
	int actHigh = a[0];
	for(int i = 1; i < n; i++){
		sum += max(0, actHigh - a[i]);	
		actHigh = max(actHigh, a[i]);
	}
	cout << sum;
	return 0;
}
