
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	cout << "Числа от 1 до 10" << '\n';
	int digit = 0;
	while (digit < 11)
	{
		cout << digit << '\n';
		digit += 1;
	}

}
