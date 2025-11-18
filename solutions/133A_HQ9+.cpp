#include <iostream>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string s;
	bool a = false;

	cin >> s;

	for (const char& c : s) {
		if (c == 'H' || c == 'Q' || c == '9') {
			a = true;
			break;
		}

	}

	if (a)
		cout << "YES";
	else
		cout << "NO";

	return 0;
}