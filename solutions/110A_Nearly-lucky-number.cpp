#include <iostream>
#include <string>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string n;
	int c = 0;

	cin >> n;

	for (const char& i : n) {
		if (i == '4' || i == '7')
			c++;
	}
	
	cout << (c == 4 || c == 7 ? "YES" : "NO");

	system("pause>0");
	return 0;
}