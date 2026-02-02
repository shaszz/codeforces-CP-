#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;

	while(t--) {
		int a, b, c;
		cin >> a >> b >> c;
		int x1 = 0, x2 = 0;
		if(a >= c) {
			x1 = -1;
		} else {
			x1 = 1;
		}
	
		if(c >= (long long)a*b) {
			x2 = -1;
		} else {
			x2 = b;
		}
	
		cout << x1 << " " << x2;
		cout << endl;
	}

	
	return 0;
}
