#include <bits/stdc++.h>
using namespace std;

int main() {

	int t;
	cin >> t;

	while(t--) {
		int n;
		cin >> n;
		vector<int> p(n);
		for(int i = 0;i < n;i++) cin >> p[i];
		int a = 0;
		int x = -1,y = -1;
		int mx = p[0];
		int mxpos = 0;
		for(int i = 0;i < n;i++) {
			if(p[i] > mx) {
				mx = p[i];
				mxpos = i;
			}
			if(mx == i+1) {
				if(x == -1) x = mxpos;
				else y = mxpos;
			}
		}
		if(y != -1) swap(p[x],p[y]);

		for(int i = 0;i < n;i++) cout << p[i] << " ";
		cout << endl;
	}
	return 0;
}
