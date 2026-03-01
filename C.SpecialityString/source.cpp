#include <bits/stdc++.h>
using namespace std;


int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		string s;
		cin >> s;
		int a = n;
		for(int i = 0;i < n/2;i++) {
			for(int j = 0;j < a-1;j++) {
				if(s[j] == s[j+1]) {
					s = s.substr(0,j) + s.substr(j+2, n-j-2);
					a -= 2;
					break;
				}

			}
		}
		if(a == 0) cout << "YES" << endl;
		else cout << "NO" << endl;
	}

	return 0;
}
