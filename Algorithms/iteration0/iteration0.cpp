#include <iostream>
using namespace std;

void draw(int h);

int main() {
	int height;
	cout << "Height: "; cin >> height;

	draw(height);
}

void draw(int h) {
	for (int i = 1; i <= h; i++) {
		for (int j = 1; j <= i; j++) {
			cout << "#";
		}
		cout << endl;
	}
}