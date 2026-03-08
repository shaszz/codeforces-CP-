#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int a,b;
		cin >> a >> b;
		int x = min(a,b);
		int y = max(a,b);
		x = max(2*x,y);
		cout << x*x << "\n";
	}
	return 0;
}
