#include <iostream>
#include <cstdlib>
#include <utility>

void func(int m[], int m1[])
{
	for (int i = 0;i < 5;i++)
	{
		*(m1 + i) = *((m + 4)-i);
	}

}


int main()
{
	setlocale(0, "");
	int m[5] = { 2,3,6,8,4 };
	int m1[5] = { 0 };

	func(m, m1);
	for (int i = 0;i < 5;i++)
	{
		std::cout << m1[i];
	}
	std::cout << '\n';
	system("pause");
	return 0;
}