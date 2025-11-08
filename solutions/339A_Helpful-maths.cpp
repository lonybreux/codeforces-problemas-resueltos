#include <iostream>
#include <vector>
using namespace std;

int main() {

	string s;
	vector<char> aux;

	cin >> s;

	for (const char& i : s) {
		if (i != '+')
			aux.push_back(i);
	}

	for (int i = 0; i < aux.size() - 1; i++) {
		for (int j = i + 1; j < aux.size(); j++) {
			if (aux[i] > aux[j])
				swap(aux[i], aux[j]);
		}
	}

	s.clear();
	for (int i = 0; i < aux.size(); i++) {
		s.push_back(aux[i]);
		
		cout << s[i];

		if (i < aux.size() - 1)
			cout << "+";
	}
	

	system("pause>0");
	return 0;
}