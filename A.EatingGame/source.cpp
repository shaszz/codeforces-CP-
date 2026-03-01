#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;

	while(t--) {
		int n;
		cin >> n;

		vector<int> a(n);
		for(int i = 0;i < n;i++ ) cin >> a[i];
		int mx = *max_element(a.begin(),a.end());
		int res = 0;
		for(int i =0;i < n;i++) if(a[i] == mx) res++;

		cout << res << endl;
	}
	return 0;
}
