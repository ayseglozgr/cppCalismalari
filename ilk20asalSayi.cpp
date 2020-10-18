#include <iostream>
using namespace std;


int main()
{
	int a = 2;
	int sayac = 0;
	while (sayac < 21)
	{
		bool asal = false;

		for (int b = 2; b < a; b++)
		{
			if (a % b != 0) {
				asal = true;
			}
			else {
				asal = false;
				break;
			}
		}

		if (asal)
		{
			cout << a << endl;
			sayac++;
		}

		a++;
	}
	return 0;
}


