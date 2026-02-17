#include <iostream>
using namespace std;

int main()
{
	bool a, b, c;
	
	cout << endl << boolalpha;

	//Оператор ||

	cout << "Оператор: ||" << endl;

	a = true;
	b = true;
	c = a || b;
	cout << a << "	" << b << "	" << c << endl;

	a = false;
	b = true;
	c = a || b;
	cout << a << "	" << b << "	" << c << endl;

	a = true;
	b = false;
	c = a || b;
	cout << a << "	" << b << "	" << c << endl;

	a = false;
	b = false;
	c = a || b;
	cout << a << "	" << b << "	" << c << "\n" << endl;
	
	//Оператор &&

	cout << "Оператор: &&" << endl;

	a = true;
	b = true;
	c = a && b;
	cout << a << "	" << b << "	" << c << endl;

	a = false;
	b = true;
	c = a && b;
	cout << a << "	" << b << "	" << c << endl;

	a = true;
	b = false;
	c = a && b;
	cout << a << "	" << b << "	" << c << endl;

	a = false;
	b = false;
	c = a && b;
	cout << a << "	" << b << "	" << c << endl;

return 0;

}
