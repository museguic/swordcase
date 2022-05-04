/*
	输入一个数n（1<=n<=200），然后输入n个不同的数，再输入一个值x，输出这个值
	在这个数组中的下标（从0开始，若不在数组中则输出-1
	样例输入
	4
	1 2 3 4
	3
	样例输出
	2
	*/
/*代码*/
/*#include<iostream>
using namespace std;
int main()
{
	int n;
	int b;
	n = 100;
	while (n)
	{
		int a[201] = { 0 };
		cin >> n;
		int flag = 0;
	
		if (n>0)
		{
			for (int i = 0; i < n; i++)
			{
				cin >> a[i];
			}
			cin >> b;
			for (int i = 0; i < n; i++)
			{
				if (a[i] == b)
				{
					cout << i << endl;
					break;
				}
				if(i==n-1&&a[i]!=b)
				{
					cout << "-1" <<" "<< endl;
					break;
				}
			}
		}
		else
		{
			return 0;
		}
	}
}*/

/*示例代码*/
/*#include<cstdio>
const int maxn = 210;
int a[maxn];
int main()
{
   int n,x;
   while(scanf_s("%d",&n) !=EOF)
{
for(int i = 0;i<n;i++)
{
scanf_s("%d",&a[i]);
}
scanf_s("%d",&x);
int k;
for(k = 0;k<n;k++)
{
if(a[k] == x)
{
 printf("%d\n",k);
 break;
 }
 }
 if(k == n)
 {
 printf("-1\n");
 }
 }
 return 0;
 }*/
