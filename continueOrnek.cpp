#include<iostream>
using namespace std;

int main()
{
	int m = 0;
	do {
		if (m == -5) {
			m =  m - 1 ;
			continue;
		}			
			m--;
			cout << m << endl;
	} 
	while (m > -8);

	return 0; 
}