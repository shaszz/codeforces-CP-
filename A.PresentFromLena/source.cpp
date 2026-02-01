#include <bits/stdc++.h>
using namespace std;

int main() {

	int n;
	cin >> n;

	for(int i = 0;i <= n;i++) {
		for(int j = 0;j < n-i;j++) {
			cout << "  ";
		}

		for(int j = n-i;j <= n;j++) {
			if(j == n+i) cout << i-(j-n);
			else cout << i-(n-j) << " ";
		}

		for(int j = n+1;j <= n+i;j++) {
			if(j == n+i) cout << i-(j-n);
			else cout << i-(j-n) << " ";
		}
		cout << endl;
	}

	for(int i = n+1;i <= 2*n;i++) {
		for(int j = 0;j < i-n;j++) cout << "  ";

		for(int j = i - n;j <= n;j++){
			if(j == 2*n - (i-n)) cout << n-(i-j);
			else cout << n-(i-j) << " ";
		} 

		for(int j = n+1;j <= 2*n-(i-n);j++){
			if(j == 2*n - (i-n)) cout << 2*n - i - (j - n);
			else cout << 2*n - i - (j - n) << " ";
		} 

		

		cout << endl;
	}

	return 0;
}
