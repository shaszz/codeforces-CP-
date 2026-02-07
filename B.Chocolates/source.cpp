#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> nums(n);
	for(int i = 0;i < n;i++) cin >> nums[i];
	long long int res = 0;
	int prev = INT_MAX;
	for(int i = n-1;i >= 0;i--) {
		if(prev <= nums[i]) {
			res += prev - 1;
			prev = prev - 1;
		} else {
			res += nums[i];
			prev = nums[i];
		}

		if(prev == 1) break;
	}

	cout << res;

	return 0;
}
