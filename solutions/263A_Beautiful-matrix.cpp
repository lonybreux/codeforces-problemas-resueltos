#include <iostream>
#include <math.h>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int matriz[5][5];
	int k = 0, p = 0;
	int min;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> matriz[i][j];
			if (matriz[i][j] == 1) {
				k = i;
				p = j;
			}
		}
	}

	min = abs(k - 2) + abs(p - 2); //abs(): valor absoluto
	cout << min;

	return 0;
}