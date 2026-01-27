#include <bits/stdc++.h>
using namespace std;

int main() {
	string card;
	cin >> card;

	for(int i = 0;i < 5;i++) {
		string inHand;
		cin >> inHand;

		if(inHand[0] == card[0] || inHand[1] == card[1]) {
			cout << "YES";
			return 0;
		}
	}

	cout << "NO";

	return 0;
}
