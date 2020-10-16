#include <iostream>
#include <string>
#include <cctype>

using namespace std;
int main() {
	string msg;
	cin >> msg;
	for (int i = 0; i <= msg.length(); i++) {
		if (msg[i] >= 'a' && msg[i] <= 'z') {
			 char character = toupper(msg[i]);
			cout << character;
		} 
		else {
			cout << msg[i];
		}
	}
	cout << endl;
}