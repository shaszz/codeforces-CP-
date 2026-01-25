#include <bits/stdc++.h>
using namespace std;

int main() {

	int t;
	cin >> t;
	int arr[t];

	for(int i = 0;i < t;i++) cin >> arr[i];
	for(int i = 0;i < t;i++) {
		int m = 10;
		int dig = 1;
		vector<int> res;
		int n = arr[i];
		while(n != 0) {
			int rem = n%m;
			n = n - rem;
			if(rem != 0) {
				res.push_back(rem);
			}
			m *= 10;
		}

		cout << res.size() << endl;
		for(int i = 0;i < res.size();i++) {
			cout << res[i] << "\t";
		}
		cout << endl;
	}


	return 0;
}
