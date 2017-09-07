#include <iostream>
#include <cstdlib>
#include <utility>

void func(int m[], int* summ)
{
	for (int i=0;i < 5;i++)
	{
		*summ += *(m + i);
	}
	
}


int main()
{
	setlocale(0, "");
	int m[5] = {2,3,6,8,4};
	int summ = 0;
	
	func(m, &summ);
	std::cout << summ << '\n';
	system("pause");
	return 0;
}