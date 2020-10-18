#include <iostream>
#include <string>

using namespace std;
int main() {
	 string names[4] = { "EMMA", "RODRIGO", "BRIAN", "DAVID" };

	 string name;
	 cin >> name;
	 bool found = false;

	 for (int i = 0; i < 4; i++) {
		if (names[i] == name) {
			found = true;
			break;
		}
	}
	 if (found == true) {
		 cout << "Found" << endl;
	 }
	 else {
		 cout << "Not Found" << endl;
	 }
}