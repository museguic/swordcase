/*有 N 种物品和一个容量是 V 的背包，每种物品都有无限件可用。

第 i 种物品的体积是 vi，价值是 wi。

求解将哪些物品装入背包，可使这些物品的总体积不超过背包容量，且总价值最大。
输出最大价值。

输入格式
第一行两个整数，N，V，用空格隔开，分别表示物品种数和背包容积。

接下来有 N 行，每行两个整数 vi,wi，用空格隔开，分别表示第 i 种物品的体积和价值。

输出格式
输出一个整数，表示最大价值。

数据范围
0<N,V≤1000
0<vi,wi≤1000
输入样例
4 5
1 2
2 4
3 4
4 5
输出样例：
10*/
/*#include<iostream>
using namespace std;
int v[1010];
int w[1010];
int F[1010][1010];
int main()
{
	int N, V,S;
	int a;
	cin >> N >> V;
	for (int i = 1; i <= N; i++)
	{
		cin >> v[i] >> w[i];
	}
		
			for (int i = 1; i <= N; i++)			
				for (int j = 0; j <= V; j++)
				{
					for (a = 0; a <= j / v[i]; a++)
					{
						F[i][j] = F[i - 1][j];
						if (j >= v[i])
						{
							F[i][j] = max(F[i][j], F[i - 1][j - a * v[i]] + a * w[i]);
						}
					}
				}

			int x = 0;
			for (int i = 0; i <= V; i++)
			{
				x = max(x, F[N][i]);
		    }
			cout << x << endl;
			return 0;
	}*/


//多重背包问题
/*#include<iostream>
#include<algorithm>
using namespace std;
int w[35];
int v[35];
int s[35];
int f[1010];
int main()
{
	int n, m;
	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		cin >> v[i] >> w[i] ;
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = m; j >= 1; j--) {
			for (int k = 0;  j >= k * v[i]; ++k)
			{
				f[j] = max(f[j], f[j - k * v[i]] + k * w[i]);
			}
		}
	}
	cout << f[m] << endl;
	return 0;
}*/


/*#include<iostream>
#include<algorithm>
using namespace std;
int w[1010];
int v[1010];
int s[1010];
int f[1010];
int main()
{
	int n, m;
	cin >> n >> m;

	for (int i = 1; i <= n; ++i) {
		cin >> v[i] >> w[i] >> s[i];
	}
	for (int i = 1; i <= n; ++i)
	{
		for (int j = m; j >= 1; --j)
			for (int k = 0; k <= s[i] && j >= k * v[i]; ++k)
			{
				f[j] = max(f[j], f[j - k * v[i]] + k * w[i]);
			}
	}
	cout << f[m];
	return 0;
}*/