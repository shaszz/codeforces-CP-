#include <bits/stdc++.h>
using namespace std;

int main() {

	int n,m;
	cin >> n >> m;

	int k = 0;

	for(int i = 0;i < n;i++) {
		for(int j = 0;j < m;j++) {
			if(i % 2 == 0) cout << '#';
			else {
				if(k % 2 == 0) {
					if(j == m-1) cout << "#";
					else cout << ".";
				} else {
					if(j == 0) cout << "#";
					else cout << ".";
				}
			}
		}
		if(i % 2 != 0) k++;
		cout << endl;
	}

	return 0;
}
