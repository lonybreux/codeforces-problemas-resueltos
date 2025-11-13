#include <iostream>
#include <vector>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	int t;
	bool h = false;
	vector<int> o;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> t;
		o.push_back(t);
	}

	for (const int& i : o) {
		if (i == 1)
			h = true;
			
	}

	if (h)
		cout << "HARD";
	else
		cout << "EASY";


	system("pause>0");
	return 0;
}