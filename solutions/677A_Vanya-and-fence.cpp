#include <iostream>
#include <vector>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);


	int n, h, v, c = 0;
	vector<int> hs;

	cin >> n >> h;

	for (int i = 0; i < n; i++) {
		cin >> v;
		hs.push_back(v);
	}

	for (const int& i : hs) {
		if (i <= h)
			c++;
		else
			c += 2;

	}

	cout << c;

	system("pause>0");
	return 0;
}