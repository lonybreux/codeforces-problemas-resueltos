#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;

	cin >> n;

	int sumaX, sumaY, sumaZ;
	int x, y, z;
	sumaX = sumaY = sumaZ = 0;
	for (int i = 0; i < n; i++) {
		cin >> x >> y >> z;

		sumaX += x;
		sumaY += y;
		sumaZ += z;
	}

	if (sumaX == 0 && sumaY == 0 && sumaZ == 0)
		cout << "YES";
	else
		cout << "NO";

	return 0;
}