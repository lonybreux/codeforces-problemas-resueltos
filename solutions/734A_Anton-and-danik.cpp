#include <iostream>
using namespace std;

int main() {

	int n, a = 0, d = 0;
	string s;

	cin >> n >> s;

	for (const char& i : s) {
		if (i == 'A')
			a++;
		else if (i == 'D')
			d++;
	}

	cout << (max(a, d) == a ? "Anton" : "Danik");

	system("pause>0");
	return 0;
}