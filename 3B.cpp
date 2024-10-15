#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int flag = 0;
    if ((a - b - c) >= 0) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}
