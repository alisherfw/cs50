#include <iostream>
using namespace std;

const int N = 10;
float average(int length, int array[]);

int main() {
	int a[N], n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "Score " << i + 1 << ": ";
		cin >> a[i];
	}
	cout << average(n, a);
}

float average(int length, int array[]) {
	int sum = 0;
	for (int i = 0; i < length; i++) {
		sum += array[i];
	}
	return sum / length;
}