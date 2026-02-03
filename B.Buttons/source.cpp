#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	int res = 0;
	int temp = n;
	for(int i = 1;i <= n;i++) {
		res += i*temp - i + 1;
		temp--;
	}
	cout << res;

	return 0;
}
