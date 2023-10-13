#include <iostream>
using namespace std; 
int main()
{
	setlocale(0, "");
	int num1;
	int num2;
	cout << "Введите высоту: ";
	cin >> num1;
	system("cls");
	cout << "[1] Трапеция" << endl;
	cout << "[2] Квадрат" << endl;
		cout << "Выберите:";
		cin >> num2;
			system("cls");
			switch (num2)
			{

			case 1:
				system("cls");
				for (int num2 = 1; num2 < num1; num2++) {
					for (int num3 = 1; num3 < num1 - num2; num3++) {
						cout << " ";
					}
					for (int num3 = num1 - num2 * 2; num3 <= num1; num3++) {
						cout << "*";
					}
					cout << endl;
				}
				cout << endl;
				cout << "Высота = " << num1;
				break;
			case 2:
				system("cls");
				for (int num4 = 0; num4 < num1; num4++) {
					for (int num5 = 0; num5 < num1; num5++) {
						cout << "*";
					}
					cout << endl;
				}
				cout << endl;
				cout << "Высота = " << num1;
				break;
			}
	return 0;
}

