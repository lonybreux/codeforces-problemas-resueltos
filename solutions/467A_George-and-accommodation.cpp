#include <iostream>
using namespace std;

int main() {

	int n, p, c, e = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> p >> c;
		if (p + 2 <= c)
			e++;
	}

	cout << e;

	system("pause>0");
	return 0;
}