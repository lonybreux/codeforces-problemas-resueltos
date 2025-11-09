#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int y;
	string aux;
	set<char> vistos;

	cin >> y;

	while (vistos.size() < 4) {
		vistos.clear();
		y++;
		aux = to_string(y);
		for (const char& c : aux) {
			vistos.insert(c);
		}
	}

	cout << y;

	system("pause>0");
	return 0;
}