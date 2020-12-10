#include<iostream>
using namespace std;

int main()
{
	int arr[9];
	for (int i = 0; i < 9; i++)
	{
		cout << i + 1 << ". number : ";
		cin >> arr[i];
	}
	for (int  i = 0; i < 8; i++)
	{
		for (int j = i+1; j < 9; j++)
		{
			if (arr[i]<arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j]=temp;
			}
		}
	}
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << endl;
	}
	system("pause");
}