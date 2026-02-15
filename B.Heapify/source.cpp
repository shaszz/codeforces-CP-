#include <bits/stdc++.h>
using namespace std;

int main() {

	int t;
	cin >> t;

	while(t--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for(int i = 0;i < n;i++) cin >> a[i];
	
		for(int i = 0;i < n;i++) {
			int j = i;
			while(j % 2 != 0 && a[j] < a[j/2]) {
				swap(a[j], a[j/2]);
				j = j/2;
			}
		}
		bool sorted = true;
		for(int i = 0;i < n-1;i++) {
			if(a[i] > a[i+1]) {
				sorted = false;
				break;
			}
		}
	
		if(sorted) cout << "YES" << endl;
		else cout << "NO"<< endl;
	}

	

	return 0;
}
