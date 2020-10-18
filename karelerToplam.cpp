

#include <iostream>
using namespace std;


int main()
{
	int a;
	cout << " enter a number which greater than 1 " << endl;
	cin >> a;
	if (a == 1) 
	{
		cout << "you entered wrong number" << endl;
	}
	else 
	{
		int k ;
		int count=0;


		for (k = 0; k <= a; k++)
		{
			count = count + k * k;
		}
		cout << count << endl;
	}

	return 0;
}

