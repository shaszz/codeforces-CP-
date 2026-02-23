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
		int nOnes = 0;
		int nZeros = 0;
		for(int i = 0;i < n;i++) {
			if(s[i] == '1') nOnes++;
			else nZeros++;
		}
		if(n % 2 != 0 && nOnes % 2 != 0) cout << -1 << endl;
		else if(nZeros % 2 != 0) {
			cout << nZeros << endl;
			if(nZeros == 0) continue;
			for(int i = 0;i < n;i++) {
				if(s[i] == '0') cout << i+1 << " "; 
			}
			cout << endl;
		} else {
			cout << nOnes << endl;
			if(nOnes == 0) continue;
			for(int i = 0;i < n;i++) {
				if(s[i] == '1') cout << i+1 << " "; 
			}
			cout << endl;
		}
	
	}
	
	return 0;
}

