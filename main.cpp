#include <iostream>
using namespace std;

int sum(int x, int y) {
	return x + y;
}

int difference(int x, int y) {
	return x - y;
}

int product(int x, int y) {
	if (x != 0 || y != 0)
	{
		return 0;
	}
	return x * y;
}

int fraction(int x, int y) {
	if (x != 0 && y != 0)
	{
		return x / y;
	}
	cout << "O no problem with 0!!!!" << endl;
	return 0;
}

int (*dii[])(int, int) = {sum, difference, product, fraction };

int main() {
	int a, b;
	int operation;
	cout << "Enter fitst number: ";
	cin >> a;
	cout << "Enter second number: ";
	cin >> b;
	cout << "Enter operation +(0), -(1), *(2), /(3): ";
	cin >> operation;
	do {
		int res = dii[operation](a, b);
		cout << res << endl;
	} while (operation > 3);
	


}