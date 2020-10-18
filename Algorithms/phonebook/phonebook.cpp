#include <iostream>
#include <string>
using namespace std;
int main() {
	string names[4] = { "EMMA", "RODRIGO", "BRIAN", "DAVID" };
	string numbers[4] = { "617-4232-3232", "617-2321-2351", "617-123-3456", "617-423-1233" };

	string input;
	cin >> input;

	for (int i = 0; i < 4; i++) {
		if (names[i] == input) {
			cout << names[i] << ": " << numbers[i] << endl;
			return 0;
		}
	}
	cout << "Nout Found" << endl;
	return 1;
}