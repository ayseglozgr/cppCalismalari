#include<iostream>
using namespace std;
int main()
{
	for (int disDongu = 0; disDongu < 6; disDongu++)
	{
		for (int i = 0; i < 4; i++)
		{
			// 15 katları
			if (i == 0) {
				cout << (disDongu + 1) * 15 << " ";
			}

			if (i == 1) {
				cout << (disDongu + 1) * 5 << " ";
			}

			if (i == 2) {
				cout << (disDongu + 1) * 10 << " ";
			}

			if (i == 3) {
				cout << pow(2, disDongu+1) << " ";
			}
		}

		cout << endl;

		
	}
	return 0;
}