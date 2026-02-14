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
	
		int l = 0;
		int r = n-1;
		string res = "YES";
		while(l < r) {
			if(abs(s[l] - s[r]) != 2 && s[l] != s[r]) {
				res = "NO";
				break;
			}
			l++;
			r--;
		} 

		cout << res << endl;
	}

	
	return 0;
}
