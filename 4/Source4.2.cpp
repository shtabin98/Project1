#include <iostream>
using namespace std;

int main()
{
	int x1{}, x2{}, suma{};

	cout << "Введите целое число:" << endl;
	cin >> x1;

	do
	{
		x2 = x1 % 10;
		suma = suma + x2;
		x1 = x1 / 10;
	} while (x1 != 0);

	cout << "Сумма цифр: " << suma << endl;

	return EXIT_SUCCESS;
}