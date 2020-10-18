#include <iostream>
using namespace std;


int main()
{
	int num1;
	cout << " enter a number which greater than 0" << endl;
	cin >> num1;
	if (num1 < 0)
	{
		cout << " you entered invalid number !" << endl;
	}
	else {
		int count = 1;
		for (int a = 1; a <= num1; a++)
		{
			count = count * a;
		}
		cout << count << endl;
	}
	return 0;
	
}

