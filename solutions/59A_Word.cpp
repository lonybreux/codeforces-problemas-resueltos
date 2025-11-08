#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string s;
	int u = 0, l = 0;

	cin >> s;

	for (const char& i : s) {
		if (int(i) >= 97 && int(i) <= 122)
			l++;
		else if (int(i) >= 65 && int(i) <= 90)
			u++;
	}

	if (u > l) {
		for (char& i : s)
			i = toupper(i);
	}
	else {
		for (char& i : s)
			i = tolower(i);
	}

	cout << s;

	system("pause>0");
	return 0;
}