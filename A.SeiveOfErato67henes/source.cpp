#include <bits/stdc++.h>
using namespace std;

int main() {

	int t;
	cin >> t;

	while(t--) {
		int n;
		cin >> n;
		bool one = false;
		bool num = false;
		
		for(int i = 0;i < n;i++) {
			int b;
			cin >> b;
			if(b == 1) one = true;
			if(b == 67) num = true;
		}
	
		if(num) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
 
	



	return 0;
}
