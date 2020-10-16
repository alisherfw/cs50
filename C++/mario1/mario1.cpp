#include <iostream>
using namespace std;
int main() {
	int n;
	do {
		cin >> n;
	} while (n < 1);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << "#";
		}
		cout << "\n";
	}
}