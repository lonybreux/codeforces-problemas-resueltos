#include <iostream>
#include <vector>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, c = 0;
	vector<string> vString;
	string o;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> o;
		vString.push_back(o);
	}

	for (int i = 0; i < n; i++) {
		if (vString[i].find('+') != string::npos) //npos: no encontrado
			c++;
		else if (vString[i].find('-') != string::npos)
			c--;
	}

	cout << c;

	system("pause>0");
	return 0;
}