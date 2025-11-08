#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int a, b, c = 0;

	cin >> a >> b;

	while (a <= b) {
		c++;
		a *= 3;
		b *= 2;
	}

	cout << c;


	system("pause>0");
	return 0;
}