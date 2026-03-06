#include <bits/stdc++.h>
using namespace std;

int gcd(int x, int y) {
	if(x == 0) return y;
	return gcd(y % x, x);
}

int main() {
	
		int n;
		cin >> n;
		if(n % 2 == 0) cout << "Mahmoud" << endl;
		else cout << "Ehab" << endl;
	
	return 0;
}
