#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
    long long num = 1;
	long long  num2 = 1;
	for (int i = 1; i <= 20; i++) 
		(num *= (i*num2));
	
	cout << num;
}

