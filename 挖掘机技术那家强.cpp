/*
Ϊ������ʵ˵���ھ�����������ļ�ǿ��PAT��֯��һ���ھ�����ܴ�������
���ݱ������ͳ�Ƴ�������ǿ���Ǹ�ѧУ
�����ʽ
�ڵ�һ�и���������10��5�η���������N�������������������N�У�
ÿ�и���һλ�����ߵ���Ϣ�ͳɼ����������������ѧУ��ż�������ɼ���
�������
6
3 65
2 80
1 100
2 70
3 40
3 0
�������
2 150
*/
/*����*/
/*#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int school,score;
	int a[50000]={0};
	int b = n;
	while(b--)
	//for(int i = 0;i<n;i++)
	{
		cin >> school >> score;
		a[school] = a[school] + score;
	}
	int k = -1;
	int max = 0;
	for (int i = 0; i <=n; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
			k = i;
		}
	}
	cout << k <<" " << max << endl;
	return 0;
}*/

/*ʾ������
#include<cstdio>
const int maxn = 100010;
int school[maxn] = { 0 };
int main()
{
	int n, schID, score;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d%d", &schID, &score);
			school[schID] += score;
	}
	int k = 1, MAX = -1;
	for (int i = 1; i <= n; i++)
	{
		if (school[i] > MAX)
		{
			MAX = school[i];
			k = i;
		}

	}
	printf("%d %d\n", k, MAX);
	return 0;
}*/