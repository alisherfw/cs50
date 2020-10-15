#include <iostream>
using namespace std;

void cough(int n);

int main()
{
    cough(3);
}
void cough(int n) {
    for (int i = 0; i < n; i++) {
        cout << "Cough!" << endl;
    }
}
