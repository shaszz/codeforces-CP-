#include <bits/stdc++.h>
using namespace std;

int main() {
	string word;
	cin >> word;

	int n = word.size();

	if(n == 1) {
		if(islower(word[0])) word[0] = toupper(word[0]);
		else word[0] = tolower(word[0]);
		cout << word;
		return 0;
	}

	for(int i = 1;i < n;i++) {
		if(islower(word[i])) {
			cout << word;
			return 0;
		}
	}

	for(int i = 0;i < n;i++) {
		if(i == 0 && islower(word[i])) word[i] = toupper(word[i]);
		else word[i] = tolower(word[i]);
	}

	cout << word;

	return 0;
}
