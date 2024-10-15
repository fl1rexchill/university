#include <iostream>

using namespace std;

int main() {
    int x1, y1, x2, y2, res1 = 0, res2 = 0;
    cin >> x1 >> y1 >> x2 >> y2;
    res1 = x1 + y1;
    res2 = x2 + y2;
    if (res1 % 2 == res2 % 2) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}