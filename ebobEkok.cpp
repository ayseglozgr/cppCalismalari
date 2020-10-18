#include <iostream>
using namespace std;

int main()
{
	int sayi1;
	cout << "bir sayi girin" << endl;
	cin >> sayi1;
	int sayi2;
	cout << "bir sayi girin " << endl;
	cin >> sayi2;
	if (sayi1 < 1 || sayi2 < 1)
	{
		cout << "gecersiz sayi girdiniz!" << endl;
	}
	else {
		int a;
		if (sayi1 < sayi2)
		{
			int sayac = 0;

			for (a = sayi1; a > 0; a--)
			{
				if (sayi1 % a == 0 && sayi2 % a == 0)
				{
					cout << " ebob : " << a << endl;
					break;

				}
			}
		}
		else
		{
			for (a = sayi2; a > 0; a--)
			{
				if (sayi1 % a == 0 && sayi2 % a == 0)
				{
					cout << "ebob : " << a << endl;
					break;
				}
			}
		}
		int ekok = (sayi1 * sayi2) / a;
		cout << "ekok : " << ekok << endl;
		return 0;
	}
}

