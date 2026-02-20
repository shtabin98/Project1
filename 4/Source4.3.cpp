#include <iostream>
using namespace std;

int main()
{
	int x1{};

	cout << "Введите целое число:" << endl;
	cin >> x1;
	
	for (int j{ 1 }; j <= 10; j++)
	{
		cout << x1 << " * " << j << " = " << x1 * j << endl;
	}
		
	cout << std::endl;

	return EXIT_SUCCESS;
}