#include <iostream>
#include <cstdlib>
#include <utility>

void func(int* a, int* b, int* c)
{
	*c = *a + *b;
}


int main()
{
	setlocale(0, "");
	int a = 0, b = 0, c=0;
	std::cin >> a >> b;
	func(&a, &b, &c);
	std::cout << a << "+" << b << "=" << c << '\n';
	system("pause");
	return 0;
}