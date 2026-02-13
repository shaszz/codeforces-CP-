#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;

	while(t--) {
		int n;
		cin >> n;
		int res = n;
		for(int i = 0;i < n;i++) {
			char c;
			cin >> c;
			if(c == '1') {
				if(i < n/2) res = max(res, (n-i)*2);
				else res = max(res, (i+1)*2);
			}
		}
		cout << res << endl;
	}
	return 0;
}
