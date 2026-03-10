#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n,m,k;
	cin >> n >> m >> k;
	vector<long long> a(n);
	for(int i = 0;i < n;i++) cin >> a[i];

	sort(a.begin(),a.end());
	
	long long x = a[n-1],y = a[n-2];
	long long ans = 0;
	int i = k;
	while(m > 0) {
		if(i == 0) {
			i = k;
			m--;
			ans += y;
		} else {
			if(m >= k)ans += k*x;
			else ans += m*x;
			m -= k;
			i = 0;
		}
	}
	cout << ans;
	return 0;
}
