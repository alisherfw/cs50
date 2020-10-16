#include <iostream>
using namespace std;

void cough(int n);

int main()
{
    int a;
    cin >> a;
    cough(a);
}
void cough(int n) {
    for (int i = 0; i < n; i++) {
        cout << "Cough!" << endl;
    }
}
