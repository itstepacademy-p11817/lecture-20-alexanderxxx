#include <iostream>
#include <cstdlib>
#include <utility>

void func(int* a)
{
	if (*a > 0)
	{
		std::cout << "+";
	}
	else if (*a < 0)
	{
		std::cout << "-";
	}
	else
	{
		std::cout << "=0";
	}
}


int main()
{
	setlocale(0, "");
	int a = 0;
	std::cin >> a;
	func(&a);
	system("pause");
	return 0;
}