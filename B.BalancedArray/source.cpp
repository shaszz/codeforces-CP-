#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		vector<int> a(n+1);
		if(n % 4 != 0) cout << "NO" << "\n";
		else {
			cout << "YES" << "\n";
			for(int i = 0;i <= n;i++) a[i] = i+1;
			int l = 1;
			int r = n-1;
			while(l < r) {
				cout << a[l] << " " << a[r] << " ";
				l += 2;
				r -= 2;
			}
			l = 0;
			r = n;
			while(l < r) {
				cout << a[l] << " " << a[r] << " ";
				l += 2;
				r -= 2;
			}
			cout << "\n";
		}
		
	}
	return 0;
}
