#include <iostream>
#include <vector>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);


	int n;
	string s;
	vector<string> vString;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> s;
		vString.push_back(s);
	}
		
	
	for (int i = 0; i < vString.size(); i++) {
		if (vString[i].length() > 10)
			cout << vString[i][0] << vString[i].length() - 2 << vString[i][vString[i].length() - 1];
		else
			cout << vString[i];

		cout << "\n";
	}

	system("pause>0");
	return 0;
}