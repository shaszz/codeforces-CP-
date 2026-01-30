#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> days(7);
	for(int j = 0;j < 7;j++) cin >> days[j];
	
	int i = 0;
	int temp = n;
	int res = 0;
	while(temp > 0) {
		temp -= days[i];

		res = i+1; 

		if(i == 6) i = 0;
		else i++;
	}

	cout << res;

	return 0;
}
