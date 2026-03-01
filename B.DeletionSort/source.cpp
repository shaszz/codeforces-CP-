#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		vector<int> a(n);
		int k = 0;
		for(int i = 0;i < n;i++) cin >> a[i];
		int c = 0;
		for(int i = 0;i < n-1;i++) {
			if(a[i] > a[i+1]) c = 1;
		}
		if(c == 1) cout << 1 << endl;
		else cout << a.size() << endl;
	}

	return 0;
}
