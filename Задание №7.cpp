#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int num;
	cout << "Введите число: ";
		cin >> num;
	for (int a = 1; a <= num; a++) {
		if (num%a == 0) {
			cout << a << endl;
		}
	}
	return 0;
}
 
