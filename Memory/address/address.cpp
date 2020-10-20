#include <iostream>
#include <string>
using namespace std;
int main() {
	string name = "EMMA";
	string *s = &name;
	cout << s << endl;
	cout << &s[0] << endl;
	cout << &s[1] << endl;
	cout << &s[2] << endl;
	cout << &s[3] << endl;
}