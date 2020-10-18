#include <iostream>
using namespace std;
int ebob(unsigned long long a, unsigned long long b)
{

	int i;
	for (i = a; i >= 1; i--)
	{
		if (a % i == 0 && b % i == 0)
		{
			break;
		}
	}
	return i;
}

int ekok(unsigned long long  x, unsigned long long y)
{
	long long carpim;
	carpim = x * y / ebob(x, y);
	return carpim;

}
int main()
{
	unsigned long long sayi1 = 1;
	unsigned long long sayi2;
	unsigned long long ekok1;
	for (sayi2 = 2; sayi2 <= 20; sayi2++)
	{
		ekok1 = ekok(sayi1, sayi2);
		sayi1 = ekok1;
	}
	cout << sayi1;
	return 0;
}
