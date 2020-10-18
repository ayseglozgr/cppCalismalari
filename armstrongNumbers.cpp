#include <iostream>
using namespace std;

int main()
{
	int a;
	int b, c, d, f;
	
		for ( a = 100; a < 501; a++)
		{
			
			b = a / 100;
			f = a % 100;
			c = f / 10;
			d = f % 10;
			if (b * b * b + c * c * c + d * d * d == a)
			{
				cout << a << endl;
			}
		}
		return 0;
}

