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
	int res = -1;
	for(int i = 0;i < n;i++) {
		int k = i;
		int c= 1;
		 
		 for(int j = i;j < n+i-1;j++) {
		 	if(s[j%n] != s[(j+1)%n]) {
		 		c++;
		 	}
		 }

		res = max(res,c);
	}

	cout << res << endl;
	}

	
	return 0;
}
