/*øÏ≈≈*/
/*#include<iostream>
using namespace std;
#define MAX 1010
int main()
{
	int a[MAX];
	int n;
	cin >> n;
	for (int i = 0;i<n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		int j;
		int temp;
		for (j = i; j < n; j++)
		{
			if (a[j] < a[i])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
		for (int i = 0; i < n; i++)
		{
			cout << a[i] ;
			if (i != n - 1)
			{
				cout << " ";
			}

		}
		cout << endl;
		return 0;
	
}*/
/*≤Â»Î≈≈–Ú*/
/*#include<iostream>
using namespace std;
int main()
{
	int a[1010];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 1; i < n; i++)
	{
		int j;
		int temp = a[i];
		j = i;
		while (j >= 0 && temp < a[j - 1])
		{
			a[j] = a[j - 1];
			j--;
		}
		a[j] = temp;
	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i];
		if (i != n - 1)
		{
			cout << " ";
		}

	}
	cout << endl;
}*/