#include <iostream>
using namespace std;

int main()
{
	 long long unsigned  k;
	cout << "enter a positive number : " << endl;
	cin >> k;
	long long unsigned a;
	int i;
	int count = 0;

	for (a = 2; a < k; a++)
	{
		if (k % a == 0)
		{
			for (i = 2; i < a; i++)
			{
				if (a % i == 0)
				{
					count++;
					break;
				}
			}
			if (count == 0)
			{
				cout << a << " ";
			}
			count = 0;

		}
	}


}

