#include <iostream> 

using namespace std;

int f(int a) {
	if (a == 1)
		return 1;
	else if (a == 2)
		return 1;
	else
		return (f(a - 1) + f(a - 2));
}
int main(void)
{
	int top = 0;
	for (int k = 1; k <= 20; k++)
	{
		cout << "f(" << k << ")" << "=" << f(k) << endl;
	}
	return 0;
}