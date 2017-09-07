#include <iostream>
#include <cstdlib>
#include <utility>


int main()
{
	setlocale(0, "");
	int a = 0, b = 0;
	std::cin >> a >> b;
	int* a1 = &a;
	int* b1 = &b;

	if (*a1 > *b1)
	{
		std::cout << a << '>' << b;
	}
	else if (*a1 < *b1)
	{
		std::cout << a << '<' << b;
	}
	else
	{
		std::cout << a << '=' << b;
	}

	system("pause");
	return 0;
}