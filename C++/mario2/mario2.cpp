#include <iostream>
using namespace std;
int main() {
	int n, m;
	do {
		cout << "Width: "; cin >> m;
		cout << "Height: "; cin >> n;
//		cin >> m >> n;
	} while (n < 1 || m < 1);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << "#";
		}
		cout << "\n";
	}
}