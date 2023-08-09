#include <bits/stdc++.h>

using namespace std;

#define rep(a, b) for(int a = 0; a < (b); ++a)

set<int> num;

int main(){
	int n; cin >> n;
	rep(i,n){
		int a; cin >> a;
		num.insert(a);
	}
	cout << num.size();
	return 0;
}
