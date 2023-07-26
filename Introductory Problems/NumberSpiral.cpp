#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	int tt; cin >> tt;
	while(tt--){
		long long x, y; cin >> y >> x;
		if(y == x) cout << x*y - (x-1);
		else if(x > y){
			if(x%2 == 0) cout << x*x - (x-1) - (x - y);
			else cout << x*x - (x-1) + x - y;
		}
		else{
			if(y%2 == 0) cout << y*y - (y-1) + (y-x);
			else cout << y*y - (y-1) - (y-x);
		}
		cout << "\n";
	}
	return 0;
}
