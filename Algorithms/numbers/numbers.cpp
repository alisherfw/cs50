#include <iostream>
using namespace std;
int main() {
	int numbers[6] = { 23, 12, 3, 12, 5, 2 };
	for (int i = 0; i < 6; i++) {
		if (numbers[i] == 50) {
			cout << "Found" << endl;
			break;
		}
		else {
			cout << "Not Found" << endl;
			break;
		}
	}
}