#include <iostream>
#include <set>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string s, aux;
	int c = 0;

	cin >> s;

	set<char> chars_distintos(s.begin(), s.end());

	cout << (chars_distintos.size() % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!");

	system("pause>0");
	return 0;
}