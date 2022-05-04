/*有 N 件物品和一个容量是 V 的背包。每件物品只能使用一次。

第 i 件物品的体积是 vi，价值是 wi。

求解将哪些物品装入背包，可使这些物品的总体积不超过背包容量，且总价值最大。
输出最大价值。

输入格式
第一行两个整数，N，V，用空格隔开，分别表示物品数量和背包容积。

接下来有 N 行，每行两个整数 vi, wi，用空格隔开，分别表示第 i 件物品的体积和价值。

输出格式
输出一个整数，表示最大价值。

数据范围
0 < N, V≤1000
	0 < vi, wi≤1000
	输入样例
	4 5
	1 2
	2 4
	3 4
	4 5
	输出样例：
	8*/
/*#include<iostream>
using namespace std;
int f[1010][1010];
int v[1010], w[1010];
int main()
{
	int n,m;
	cin >> n >> m;
	for(int i = 1;i<=n;i++)
	{
		cin >> v[i] >> w[i];
	}
	for(int i = 1;i<=n;i++)
		for (int j = 0; j <= m; j++)
			{
				f[i][j] = f[i - 1][j];
				if (j >= v[i])
					f[i][j] = max(f[i][j], f[i - 1][j -  v[i]] +  w[i]);
			}
	int x = 0;
	for (int i = 0; i <= m;i++)
		x = max(x, f[n][i]);
	cout << x << endl;
}*/

#include<iostream>
using namespace std;
int F[1010];
int v[1010];
int w[1010];
int main()
{
	int n, m;
	cin >> n >> m;

	for (int i = 1; i <= n; i++)
	{
		cin >> v[i] >> w[i];
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = m; j >= 1; j--)
		{
			if(j>=v[i])
			F[j] =max(F[j] ,F[j - v[i]] + w[i]);
		}
	}
	cout << F[m] << endl;
	return 0;

}
