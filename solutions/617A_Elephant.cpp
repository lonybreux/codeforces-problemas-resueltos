#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int x, c = 5, e = 0;

	cin >> x;

	while (x > 0 && c > 0) {
		if (x - c < 0 && c > 0)
			c--;
		
		x -= c;
		e++;
		
	}

	cout << e;

	system("pause>0");
	return 0;
}