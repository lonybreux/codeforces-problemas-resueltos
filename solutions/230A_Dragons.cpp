#include <iostream>
#include <vector>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int s, n;

	cin >> s >> n;


	int x, y;
	vector<int> auxX;
	vector<int> auxY;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;

		auxX.push_back(x);
		auxY.push_back(y);
	}

	//Bubble sort
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - (i + 1); j++) {
			if (auxX[j] > auxX[j + 1]) {
				swap(auxX[j], auxX[j + 1]);
				swap(auxY[j], auxY[j + 1]);
			}
		}
	}


	bool lose = false;
	for (int i = 0; i < n; i++) {
		if (auxX[i] < s)
			s += auxY[i];
		else {
			lose = true;
			break;
		}
			
	}

	if (lose) {
		cout << "NO";
	}
	else {
		cout << "YES";
	}

	return 0;
}