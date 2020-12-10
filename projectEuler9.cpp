#include <iostream>
using namespace std;

int main()
{
	int i;
	int j;
	int k;
	int temp;
	for (i = 1; i < 1000; i++)
	{
		for (j = 1; j < 1000; j++)
		{
			for (k = 1; k < 1000; k++)
			{
				temp = i * i + j * j;
				if ((temp==k * k) && (i + j + k==1000) && (i<j))
				{
						cout << "a : " << i << endl;
						cout << "b : " << j << endl;
						cout << "c : " << k << endl;
						cout << i << j << k << endl;
				}
			}
		}
		
	}
	system("pause");
} 
