#include <iostream>
#include <vector>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	int a;
	int sum = 0, sum_aux = 0;
	int c = 1;
	vector<int> aux;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a;
		aux.push_back(a);
	}

	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (aux[i] < aux[j])
				swap(aux[i], aux[j]);
		}
	}
	
	for (int i = 0; i < n; i++) {

		sum += aux[i];

		for (int j = i + 1; j < n; j++) {
			sum_aux += aux[j];
		}

		if (sum > sum_aux)
			break;
		else {
			c++;
			sum_aux = 0;
		}
			
			
	}

	cout << c;


	system("pause>0");
	return 0;
}