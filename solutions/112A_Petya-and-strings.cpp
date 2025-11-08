#include <iostream>
#include <string>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string s1, s2;

	cin >> s1 >> s2;

	for (char& i : s1) i = tolower(i);
	
	for (char& i : s2) i = tolower(i);
	
	if (s1 == s2)
		cout << "0";
	else
		cout << (s1 < s2 ? "-1" : "1");

	system("pause>0");
	return 0;
}