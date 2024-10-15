#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    int y = 0;
    y = y2 - y1;
    if ((x1 == x2) && ((y1 == 2 && (y > 0 && y < 3)) || ((y1 > 2) && (y1 < 8) && (y > 0 && y < 2)))) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}