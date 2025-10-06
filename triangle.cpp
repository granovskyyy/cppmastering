#include <iostream>
using namespace std;

int main() {
	int n{};
	cout << "Enter triangle length: " << endl;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		if (i == n) {
			for (int k = 0; k < i; k++) {
				cout << "*";
			}
		}
		else {
			for (int k = 0; k < i; k++) {
				if ((k == 0) || (k == (i - 1))) {
					cout << "*";
				}
				else {
					cout << " ";
				}
			}
			cout << endl;
		}
	}
	return 0;
}