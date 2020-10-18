#include<iostream>
using namespace std;

int main()
{
	int buyukluk;
	cout << " buyukluk : ";
	cin >> buyukluk;

	for (int a = 0; a < buyukluk; a++)
	{
		for (int k = 0; k < buyukluk - a - 1; k++)
		{
			cout << "0";
		}
		cout << "1";

		for (int k = 0; k < a; k++)
		{
			cout << "0";
		}

		
		cout << endl;
	}
	return 0;
}