#include <bits/stdc++.h>
using namespace std;

int main() {

	int n;
	cin >> n;
	string strIn;
	cin >> strIn;
	string strOut = "";
	
	int idx = 0;
	for(int i = 1;idx < n;i++) {
		strOut += strIn[idx];
		idx += i;
	}

	cout << strOut;

	return 0;
}
