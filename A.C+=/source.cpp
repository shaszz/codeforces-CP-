#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;

	for(int k = 0;k < t;k++) {
		int a,b,n;
		cin >> a >> b >> n;
	
		int i = 0;
		while(b <= n && a <= n) {
			if(a > b) b += a;
			else a += b;
			i++;
		}
	
		cout << i << endl;
	}
	return 0;
}
