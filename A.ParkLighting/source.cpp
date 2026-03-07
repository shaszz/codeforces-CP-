#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n,m;
		cin >> n >> m;
		if(n % 2 == 0 || m % 2 == 0) cout << (m * n)/2 << "\n";
		else cout << ((m * n)+1)/2 << "\n";
	}
	return 0;
}
