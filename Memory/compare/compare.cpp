#include <iostream>
#include <string>
using namespace std;
int main() {
	string s, t;
	cout << "s: "; cin >> s;
	cout << "t: "; cin >> t;

	if (s == t)
		cout << "Same" << endl;
	else
		cout << "Different" << endl;
}