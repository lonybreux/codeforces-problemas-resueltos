#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);


	int n, t;
	string s;

	cin >> n >> t;
	cin >> s;
	for (int i = 0; i < t; i++) {
		for (int j = 0; j < n - 1; j++) {
			if (s[j] == 'B' && s[j + 1] == 'G') {
				swap(s[j], s[j + 1]);
				j++;
			}
		}
	}

	cout << s;
	
	return 0;
}