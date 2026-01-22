#include <bits/stdc++.h>
using namespace std;

int main() {

	int n, k, l, c, d, p, nl ,np;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;

	int res = (k * l)/(n * nl);
	res = min(res, p/(n*np));
	res = min(res, (c*d)/n);

	cout << res;

	return 0;
}
