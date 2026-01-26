#include <bits/stdc++.h>
using namespace std;

int main() {
	string name;
	cin >> name;
		
	set<char> p;
	for(char c : name) {
		p.insert(c);
	}
	int n = p.size();

	if(n % 2 == 0) {
		cout << "CHAT WITH HER!";
	} else {
		cout << "IGNORE HIM!";
	}

	return 0;
}
