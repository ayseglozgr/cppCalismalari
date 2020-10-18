#include<iostream>
using namespace std;
 
int main() {
	int t;
	int d[] = { 5,6,4,8,7,9,3,1,2,0};
	for (int i = 0; i < 10 - 1; i++)
	for (int j = 0; j < 10 - 1; j++)



	{
			if (d[j] > d[j + 1])
			{
				t = d[j];
				d[j] = d[j + 1];
				d[j + 1] = t;
		}
	}
	for (int i = 0; i < 10; i++) {
		cout << i<<" "<<d[i]<<endl;

	}
}