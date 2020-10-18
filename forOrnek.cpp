#include<iostream>
using namespace std;


int main()
{
	int k = 1;
	int t = 0;
	int a;
	int b;
	cout << "kaca kadar olsun?" << endl;
	cin >> a;
	cout << "kaca bolunecek?" << endl;
	cin >> b;
	for (a; k <= a; k++)
	{
		if (k % b == 0)
		{
			cout << k << endl;
			t++;
		}

	}
	cout << t << endl;
	return 0;
}