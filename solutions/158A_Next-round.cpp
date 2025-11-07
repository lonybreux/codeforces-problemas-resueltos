#include <iostream>
#include <vector>
using namespace std;

int main() {

	int n, k, x, b, e = 0;
	vector<int> pos;


	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		cin >> x;
		pos.push_back(x);
	}

	b = pos[k - 1];
	for (int i = 0; i < n; i++) {
		if (pos[i] >= b && pos[i] != 0)
			e++;
	}

	cout << "\n" << b;
	cout << "\n" << e;


	
	system("pause>0");
	return 0;
}