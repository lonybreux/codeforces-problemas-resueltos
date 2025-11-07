#include <iostream>
#include <vector>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, c = 0;
	int p, v, t;
	cin >> n;
	

	for (int i = 0; i < n; i++) {
		cin >> p >> v >> t;

		if (p + v + t >= 2)
			c++;
	}
	
	cout << c;


	system("pause>0");
	return 0;
}