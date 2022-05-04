/*#include<iostream>
using namespace std;
void hannuota(int a, int b, int c, int n)
{
	if (n == 1)
	{
		cout << a << " " << c << endl;
	}
	if (n > 1)
	{
		hannuota(a, c, b, n - 1);
		cout << a << " " << c << endl;
		hannuota(b, a, c, n - 1);
	}
}
int main()

{
	int a, b, c;
	int n;
	cin >> n;
	a = 1;
	b = 2;
	c = 3;
	hannuota(a, b, c, n);
	return 0;
}*/