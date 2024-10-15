#include<iostream>
#include<string>
using namespace std;

int main() {
	string a;
	getline(cin, a);
	if (a[0] == 'A' || a[0] == 'C' || a[0] == 'E' || a[0] == 'G') {
		if (a[1] == '1' || a[1] == '3' || a[1] == '5' || a[1] == '7') {
			cout << "BLACK";
		}
		else {
			cout << "WHITE";
		}
	}
	else {
		if (a[1] == '1' || a[1] == '3' || a[1] == '5' || a[1] == '7') {
			cout << "WHITE";
		}
		else {
			cout << "BLACK";
		}
	}
	return 0;
}