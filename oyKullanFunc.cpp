#include <iostream>
using namespace std;

bool vote(int a)
{
	if (a >= 18)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int d;
	cout << " enter your age : " << endl;
	cin >> d;
	vote(d);
	if (vote(d) == true)
	{
		cout << " you can " << endl;
	}
	else
	{
		cout << " you can't " << endl;
	}
	return 0;
}
