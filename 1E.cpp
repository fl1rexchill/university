#include <iostream>

using namespace std;

int main() {
    int x11, x12, x21, x22, x31, x32, x41, x42;
    cin >> x11 >> x12 >> x21 >> x22 >> x31 >> x32 >> x41 >> x42;
    int x1 = x11 + x21 + x31 + x41;
    int x2 = x12 + x22 + x32 + x42;
    if (x1 > x2) {
        cout << 1;
    }
    else if (x1 < x2) {
        cout << 2;
    }
    else {
        cout << "DRAW";
    }
    return 0;
}