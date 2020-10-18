#include<iostream>
using namespace std;

int main()
{
	int buyukluk ;
	cout << " buyukluk : ";
	cin >> buyukluk;
	
	for (int t = 0; t < buyukluk; t++)
	{
		for (int a=0 ; a < buyukluk ; a++)
		{
			if (a == t)
			{
				cout << "1"; 

		}
			else
			{
				cout << "0";
			}
		}
		cout << endl;
	}
	return 0;
}