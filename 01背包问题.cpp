/*�� N ����Ʒ��һ�������� V �ı�����ÿ����Ʒֻ��ʹ��һ�Ρ�

�� i ����Ʒ������� vi����ֵ�� wi��

��⽫��Щ��Ʒװ�뱳������ʹ��Щ��Ʒ��������������������������ܼ�ֵ���
�������ֵ��

�����ʽ
��һ������������N��V���ÿո�������ֱ��ʾ��Ʒ�����ͱ����ݻ���

�������� N �У�ÿ���������� vi, wi���ÿո�������ֱ��ʾ�� i ����Ʒ������ͼ�ֵ��

�����ʽ
���һ����������ʾ����ֵ��

���ݷ�Χ
0 < N, V��1000
	0 < vi, wi��1000
	��������
	4 5
	1 2
	2 4
	3 4
	4 5
	���������
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
