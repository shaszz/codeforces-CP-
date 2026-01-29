#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;

	while(t--) {
		string n;
		cin >> n;
		int len = n.size();
		int first = -1, last = -1;
		for(int i = 0;i < len;i++) {
			if(n[i] == '1') {
				if(first == -1) first = i;
				last = i;
			}
		}
		int ans = 0;
		for(int i = first + 1;i < last;i++) {
			if(n[i] == '0') ans++;
		}
		
		cout << ans << endl;
	}
	return 0;
}
