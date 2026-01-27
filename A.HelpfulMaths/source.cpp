#include <bits/stdc++.h>
using namespace std;

int main() {
	string sum;
	cin >> sum;
	int n = sum.size();

	vector<int> nums;

	for(int i = 0;i < n;i++) {
		if(sum[i] != '+') nums.push_back(sum[i] - '0');

	}
	sort(nums.begin(), nums.end());
	for(int i = 0;i < n;i++) {
		if(sum[i] != '+') {
			char num = nums[i/2] + '0';
			sum[i] = num;
		}
	}
	
	cout << sum;

	return 0;
}
