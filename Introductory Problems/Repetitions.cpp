#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
#define rep(a, b) for(int a = 0; a < (b); ++a)
#define st first
#define nd second
#define pb push_back
#define all(a) a.begin(), a.end()

int main(){
	string s; cin >> s;
	int maxx = 1;
	int act = 1;
	int n  = s.size();
	for(int i = 1; i < n; i++){
		if(s[i] == s[i-1]) act++;
		else act = 1;
		maxx = max(maxx, act);
	}
	cout << maxx;
	return 0;
}
