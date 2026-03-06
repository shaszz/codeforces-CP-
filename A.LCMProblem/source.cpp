#include <bits/stdc++.h>
using namespace std;

int gcd(int x, int y) {
	if(x == 0) return y;
	return gcd(y % x, x);
}

int main() {
	int t;
	cin >> t;

	while(t--) {
		int l,r;
		cin >> l >> r;
		
		if(2*l > r) cout << -1 << " " << -1 << endl;
		else cout << l << " " << 2*l << endl;
		
	}

	return 0;
}
