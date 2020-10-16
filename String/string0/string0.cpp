#include <iostream>
#include <string>
using namespace std;
int main() {
	string msg;
	cin >> msg;
	for (int i = 0; i <= msg.length(); i++) {
		if (msg[i] >= 'a' && msg[i] <= 'z') {
			char character = msg[i] - 32;
			cout << character;
		} 
		else {
			cout << msg[i];
		}
	}
	cout << endl;
}