#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, t;
	cin >> n >> t;
	vector<int> portals(n-1);
	for(int i = 0;i < n-1;i++) cin >> portals[i];

	int i = 0;
	while(i <= t) {
		if(i+1 == t) {
			cout << "YES";
			return 0;
		}
		i += portals[i];
	}

	cout << "NO";
	return 0;
}
