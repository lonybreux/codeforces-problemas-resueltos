#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int k, n, w, c = 0;

	cin >> k >> n >> w;

	for (int i = 1; i <= w; i++) {
		c += k * i;
	}
	

	cout << max(c - n, 0);

	system("pause>0");
	return 0;
}