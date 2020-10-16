#include <iostream>
#include <chrono>
#include <thread>

unsigned int microseconds;
using namespace std;
int main() {
    long long i = 1;
    while (true) {
        cout << i << endl;
        i *= 2;
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    }
}