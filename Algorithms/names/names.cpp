#include <iostream>
#include <string>

using namespace std;
int main() {
	 string names[4] = { "EMMA", "RODRIGO", "BRIAN", "DAVID" };

	 string name;
	 cin >> name;

	 for (int i = 0; i < 4; i++) {
		if (names[i] == name) {
			cout << "Found" << endl;
			return 0;
		}
	} 
	 cout << "Not Found" << endl;
	 return 1;
}