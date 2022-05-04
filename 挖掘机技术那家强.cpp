/*
为了用事实说明挖掘机技术到底哪家强，PAT组织了一场挖掘机技能大赛。请
根据比赛结果统计出技术最强的那个学校
输入格式
在第一行给出不超过10的5次方的正整数N，即参赛人数。随后是N行，
每行给出一位参赛者的信息和成绩，包括其所代表的学校编号及其比赛成绩。
输出举例
6
3 65
2 80
1 100
2 70
3 40
3 0
输出样例
2 150
*/
/*代码*/
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

/*示例代码
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