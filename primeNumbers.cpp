#include <iostream>
using namespace std;

int main()
{
	int a;
	int i;
	int count = 0;

	for (a = 2; a < 100; a++)
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
			cout << a << endl;
		}
		count = 0;
	}
	return 0;
}
