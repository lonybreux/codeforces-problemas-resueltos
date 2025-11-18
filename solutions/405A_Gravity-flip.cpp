#include <iostream>
#include <vector>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<int> box;

	int n;
	int a;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a;
		box.push_back(a);
	}

	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (box[i] > box[j])
				swap(box[i], box[j]);
		}
	}
	
	for (const int& i : box) {
		cout << i << " ";
	}

	system("pause>0");
	return 0;
}