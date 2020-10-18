#include<iostream>
using namespace std;

int main() {
	int i, j;

	for (i = 1; i < 5; i++)
	{
		for (j = 0; j <= 5; j++)
		{
			if ((i + j) % 2 == 0)
			{
				cout << "x";
			}
			else
			{
				cout << "o";
			}
		}
		cout << endl;


	}
	return 0;
}



