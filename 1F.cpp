#include <iostream>

using namespace std;

int main()
{
    int x;
    int one, two, three, four;
    cin >> x;
    one = x / 1000;
    two = x / 100 % 10;
    three = x / 10 % 10;
    four = x % 10;
    if (one == four && two == three) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}