#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int j = 0;

	for(int i = 0;i < n;i++) {
		int a;
		cin >> a;
		if(a % 2 == 0) cout << a / 2 << endl;
		else {
			if(a < 0) {
				if(j % 2 == 0) cout << (a / 2) << endl;
				else cout << (a / 2) - 1<< endl;
			} else {
				if(j % 2 == 0) cout << (a / 2) + 1 << endl;
				else cout << (a / 2) << endl;
			}
			
			j++;
		}
		
	}

	return 0;
	
}
