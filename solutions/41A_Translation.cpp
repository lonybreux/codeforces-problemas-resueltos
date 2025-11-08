#include <iostream>
using namespace std;

int main() {

	string t, s, aux;

	cin >> t >> s;

	for (int i = t.size() - 1; i >= 0; i--) {
		aux.push_back(t[i]);
	}
	
	cout << (s == aux ? "YES" : "NO");

	system("pause>0");
	return 0;
}