/*�� N ����Ʒ��һ�������� V �ı�����ÿ����Ʒ�������޼����á�

�� i ����Ʒ������� vi����ֵ�� wi��

��⽫��Щ��Ʒװ�뱳������ʹ��Щ��Ʒ��������������������������ܼ�ֵ���
�������ֵ��

�����ʽ
��һ������������N��V���ÿո�������ֱ��ʾ��Ʒ�����ͱ����ݻ���

�������� N �У�ÿ���������� vi,wi���ÿո�������ֱ��ʾ�� i ����Ʒ������ͼ�ֵ��

�����ʽ
���һ����������ʾ����ֵ��

���ݷ�Χ
0<N,V��1000
0<vi,wi��1000
��������
4 5
1 2
2 4
3 4
4 5
���������
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


//���ر�������
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