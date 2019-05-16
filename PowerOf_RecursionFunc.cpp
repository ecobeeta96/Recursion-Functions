//Header files
#include <iostream>
#include <math.h>

using namespace std;

//function
void powerFunc(int x, int n, int y, int z)
{

	if (n > 0)
	{

		powerFunc(x * y, n - 1, y, z);
		cout << y << "^" << z - n + 1 << " = " << x << endl
			 << endl;
	}
	if (n == z)
	{
		cout << y << "^" << 0 << " = " << 1 << endl
			 << endl;
	}
}

int main()
{

	int base = 0, power = 0;

	cout << "Base: ";
	cin >> base;
	cout << "Power : ";
	cin >> power;

	cout << endl
		 << endl;

	powerFunc(base, power, base, power);
}
