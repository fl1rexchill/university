#include <cmath>
#include <iostream>

using namespace std;

int main() {
    double a, b, c;
    double res, ress = 0;
    int flag = 0;
    cin >> a >> b >> c;
    if (a == 0) {
        if (b == 0) {
            if (c == 0)
            {
                cout << "-1";
                flag = 1;
            }
            else {
                cout << "0";
                flag = 1;
            }
        }
        else
        {
            res = (-c / b);
            cout << "1" << endl << res;
            flag = 1;
        }
    }
    double D = b * b - 4 * a * c;
    if (flag == 0) {
        if (D < 0) {
            cout << "0";
        }
        else if (D == 0)
        {
            res = (-b / double(2 * a));
            cout << "1" << endl << res;
        }
        else
        {
            res = ((-b + sqrt(D)) / double(2 * a));
            ress = ((-b - sqrt(D)) / double(2 * a));
            cout << "2" << endl << res << endl << ress;
        }
    }
    return 0;
}
