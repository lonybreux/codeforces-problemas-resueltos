#include <iostream>
#include <vector>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, a, b, m = 0, v = 0;
	vector<int> a_i;
	vector<int> b_i;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		a_i.push_back(a);
		b_i.push_back(b);
	}

	for (int i = 0; i < n; i++) {
		v -= a_i[i];
		v += b_i[i];
		if (v > m)
			m = v;
	}

	cout << m;

	system("pause>0");
	return 0;
}