#include <iostream>

using namespace std;

int main()
{
    int x;
    int one, two, three, four;
    cin >> one >> two;
    cin >> three >> four;
    if ((one == three && two != four) || (one != three && two == four) || (one == three && two == four)) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}