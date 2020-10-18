#include <iostream>
using namespace std;

int main()
{
	int firstNumber;
	int secondNumber;
	int thirthNumber;

	cout << "enter first number : " << endl;
	cin >> firstNumber;
	cout << "enter second number : " << endl;
	cin >> secondNumber;
	cout << "enter thirth number : " << endl;
	cin >> thirthNumber;

	if (firstNumber > secondNumber && firstNumber > thirthNumber)
	{
		cout << firstNumber << " is the greatest." << endl;
	}
	else if (secondNumber > firstNumber&& secondNumber > thirthNumber)
	{
		cout << secondNumber << " is the greatest. " << endl;
	}
	else if (thirthNumber > firstNumber&& thirthNumber > secondNumber)
	{
		cout << thirthNumber << " is greatest. " << endl;
	}
	else
	{
		if (firstNumber == secondNumber && firstNumber == thirthNumber)
		{
			cout << " all of them are equal." << endl;
		}
		else if (firstNumber == secondNumber && firstNumber != thirthNumber)
		{
			cout << " the first number and second number are equal to each other but the thirth number isn't equal to them" << endl;
		}

		else if (firstNumber == thirthNumber && firstNumber != secondNumber)
		{
			cout << " the first number and thirth number are equal to each other but the second number isn't equal to them" << endl;
		}
		else if (secondNumber == thirthNumber && secondNumber != firstNumber)
		{
			cout << " the second number and thirth number are equal to each other but the first number isn't equal to them" << endl;
		}
		 
		else
		{
			cout << " all of them are equal. " << endl;
		}
	}

	





}