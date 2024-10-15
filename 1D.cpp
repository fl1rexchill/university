#include <iostream>

using namespace std;

int main() {

	int a = 0, b = 0, c = 0;
	cin >> a >> b >> c;
	int max = 0, min = 0;
	if (a >= b && b >= c) {
		min = c;
		max = a;
	}
	if (a >= c && c >= b) {
		min = b;
		max = a;
	}
	if (b >= a && a >= c) {
		min = c;
		max = b;
	}
	if (b >= c && c >= a) {
		min = a;
		max = b;
	}
	if (c >= a && a >= b) {
		min = b;
		max = c;
	}
	if (c >= b && b >= a) {
		min = a;
		max = c;
	}
	cout << max - min;
	return 0;
}