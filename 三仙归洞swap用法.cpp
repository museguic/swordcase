/*三个倒扣着的不透明小碗排成一排。

随机挑选一个小碗，将一个小球置于碗中。

然后进行 n 次操作，编号 1∼n。

对于第 i 次操作：

如果 imod2 = 1，则操作内容为将位于中间的碗和位于左边的碗交换位置。
如果 imod2 = 0，则操作内容为将位于中间的碗和位于右边的碗交换位置。
我们不妨用 0, 1, 2 来表示左、中、右三个位置。

n 次操作全部完成以后，装有小球的碗位于位置 x。

请你计算，所有操作开始前，装有小球的碗所在的初始位置。

输入格式
第一行，一个整数 n。

第二行，一个整数 x。

输出格式
输出一个 0∼2 的整数，表示所有操作开始前，装有小球的碗所在的初始位置。

数据范围
前 6 个测试点满足 1≤n≤5。
所有测试点满足 1≤n≤2×109，0≤x≤2。

输入样例1：
4
2
输出样例1：
1
输入样例2：
1
1
输出样例2：
0*/
  //适用范围小
/*#include<iostream>
using namespace std;
int main()
{
	int n, x;
	cin >> n;
	cin >> x;
	int t;
	int a[3] = { 0,1,2 };
	for(int i = 1;i<=n;i++)
	{
		if (i % 2 == 1)//中间和左边的换位置
		{
			t = a[1];
			a[1] = a[0];
			a[0] = t;
		}
		if (i % 2 == 0)//中间和右边换位置
		{
			t = a[1];
			a[1] = a[2];
			a[2] = t;
			
		}
	}
	cout << a[x] << endl;
	return 0;
}*/
//找规律
/*#include<iostream>
using namespace std;
int main()
{
	int n;
	int x;
	int z;
	int a[3];
	cin >> n;
	cin >> x;
		n = n % 6;
		if (n == 0)
		{
			n = 6;
		}
	if (n % 2 == 0)
	{
		int a[3] = { 1,2,0 };
		int b[3] = { 2,0,1 };
		int c[3] = { 0,1,2 };
		if (n / 2 == 1)
		{
			z = a[x];
		
		}
		if (n / 2 == 2)
		{
			z = b[x];
		}
		if (n / 2 == 3)
		{
			z = c[x];
			
		}
	}
	else
	{
		int a[3] = { 1,0,2 };
		int b[3] = { 2,1,0 };
		int c[3] = { 0,2,1 };
		if (n / 2 == 0)
		{
			z = a[x];
			
		}
		if (n / 2 == 1)
		{
			z = b[x];
			
		}
		if (n / 2 == 2)
		{
			z = c[x];
			
		}
	}
	cout << z << endl;
	return 0;
}*/
/*swap方法*/
/*#include<iostream>
using namespace std;
int main()
{
	 int n, x;
	 cin >> n >> x;
	 string a = "012";
	 n = n % 6;
	 for (int i = 1; i<=n; i++)
	 {
		 if (i % 2 == 1)
			 swap(a[0], a[1]);
		 else
			 swap(a[1], a[2]);
	 }
	 cout << a [x] << endl;
}
*/