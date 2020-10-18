#include<iostream>
using namespace std;

int fibo(int a) 
{
	if (a <= 0 )
	{
		cout << "you entered wrong number" << endl;
	} else	if (a == 1)
		return 1;
	else if (a == 2)
	{
		return 1;
	}
	else 
	{
		return fibo(a - 1) + fibo(a - 2);
	}
}

int main()
{
	for (int k = 1; k < 10; k++)
	{
		cout << fibo(k) << endl;
	}
	int newNumber;
	cout << "enter a number which is greater than 0." << endl;
	cin >> newNumber;
	cout << fibo(newNumber) << endl;
	return 0;
}