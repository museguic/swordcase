/*小明家里有 n 个鸡蛋。

每天早上，小明都要吃 1 个鸡蛋作为早餐。

小明家里还有一个母鸡。

母鸡会在第 m, 2m, 3m… 天的晚上下蛋，每次只下 1 个蛋。

请问，连续多少天以后，小明就没有早餐鸡蛋吃了？

输入格式
一行两个整数 n, m。

输出格式
一个整数，表示答案。

数据范围
所有测试点满足 1≤n≤100，2≤m≤100。

输入样例1：
2 2
输出样例1：
3
样例1解释
第 1, 2 天的早晨，小明可以吃原本就有的鸡蛋。

第 3 天的早晨，小明可以吃第 2 天晚上母鸡下的鸡蛋。

第 4 天的早晨，小明没有鸡蛋可以吃了。

所以，连续 3 天以后，小明就没有早餐鸡蛋可以吃了。

输入样例2：
9 3
输出样例2：
13
样例2解释
第 1∼9 天的早晨，小明可以吃原本就有的鸡蛋。

第 10, 11, 12 天的早晨，小明可以吃第 3, 6, 9 天晚上母鸡下的蛋。

第 13 天的早晨，小明可以吃第 12 天晚上母鸡下的蛋。

第 14 天的早晨，小明没有鸡蛋可以吃了。

所以，连续 13 天以后，小明就没有早餐鸡蛋可以吃了。*/
/*#include<iostream>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 1;; i++)
	{
		n = n - 1;
		if (i % m == 0)
		{
			n = n + 1;
		}
		if (n == 0)
		{
			cout << i << endl;
			break;
		}
	}
	return 0;
}*/
/*#include<iostream>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	int day = 0;
	while (n)
	{
		day++;
		n--;
		if (day % m == 0)
		{
			n++;
		}
	}
	cout << day << endl;
	return 0;
}*/
