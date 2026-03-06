#include <bits/stdc++.h>
using namespace std;

int main() {

	int n, k;
	cin >> n >> k;

	vector<pair<int,int>> a;
	for(int i = 0;i < n;i++) {
		int x;
		cin >> x;
		a.push_back({x,i+1});
	}

	sort(a.begin(), a.end());

	int sum = 0;
	vector<int> b;
	for(auto &p : a) {
		if(sum + p.first <= k) {
			sum += p.first;
			b.push_back(p.second);
		} else break;
	}

	cout << b.size() << endl;
	for(int i = 0;i < b.size();i++) cout << b[i] << " ";
	
	return 0;
}
