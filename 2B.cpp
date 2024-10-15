#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int one, two, three, four;
    cin >> one >> two;
    cin >> three >> four;
    int x = 0, y = 0;
    x = abs(one - three);
    y = abs(two - four);
    if (x == y) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}