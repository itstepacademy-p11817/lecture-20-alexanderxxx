#include <iostream>
#include <cstdlib>
#include <utility>

void func(int* a, int* b)
{
	//std::swap(*a, *b);
	int p = 0;
	p = *a;
	*a = *b;
	*b = p;
}


int main()
{
	setlocale(0, "");
	int a = 0, b=0;
	std::cin >> a >> b;
	func(&a, &b);
	std::cout << a << "	" << b << '\n';
	system("pause");
	return 0;
}