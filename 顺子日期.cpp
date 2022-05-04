/*
#include<iostream>
using namespace std;
int sum;
int day;
int t, t0;
int panduan(int a,int b,int x)
{

	if (x <= a)
	{
		day = 1;
	}
	if (x > a && x <= a * 5)
	{
		t0 = x/ a;
		t = x% a;
		if (t == 0)
		{
			day = t0;
		}
		if (t != 0)
		{
			day = t0 + 1;
		}
	}
	if(x>a*5)
	{
		x = x - a * 5;
		if (x <= b)
		{
			day = 6;
		}
		if (x > b)
		{
			day = 7;
		}
	}
	return day;
}
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	while (1)
	{
		sum = a * 5 + b * 2;
		if (c <= sum)
		{
			panduan(a, b, c);
		}
		else
		{
			t = c / (a * 5 + b * 2);
			t0 = c % (a * 5 + b * 2);
			day = t * 7 + panduan(a, b, t0);

		}
		break;
	}
	cout << day << endl;
	return 0;
}
*/