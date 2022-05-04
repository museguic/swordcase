/*给定一个仅包含小写字母的集合。

请你判断，集合中不同字母的数量。

输入格式
输入一行字符串，用以描述这个小写字母集合。

字符串以{ 开始，以 } 结束，中间列出所有集合中包含的小写字母，小写字母两两之间用逗号（, ）加空格（）隔开。

输出格式
一个整数，表示集合中不同字母的数量。

数据范围
前 5 个测试点满足，集合中包含的字母数量在[0, 10] 范围内。
所有测试点满足，集合中包含的字母数量在[0, 333] 范围内。

输入样例1：
{ a, b, c }
输出样例1：
3
输入样例2：
{ b, a, b, a }
输出样例2：
2
输入样例3：
{}
输出样例3：
0*/
/*#include<iostream>
#include<algorithm>
#include<unordered_set>
using namespace std;
int main()
{
	unordered_set<char>hash;
	char c;

	while (cin>>c)
		if (c >= 'a' && c <= 'z')
		
			hash.insert(c);
	cout << hash.size() << endl;
	return 0;
}*/
/*#include<iostream>
using namespace std;
int main()
{
	int z = 0;
	char c;
	int b[1010]={0};
	while (cin >> c)
	{
		if (c >= 'a' && c <= 'z')
		{
			b[c - 'a']++;
		}
		if (c == '}')
			break;
	}
	for (int i = 0; i < 26; i++)
	{
		if (b[i])
		{
			z++;
		}
	}
	cout << z << endl;
	return 0;
}*/
/*示例代码*/
/*#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{
	unordered_set<char> hash; 
	char c;
	while (cin >> c)
	{
		if (c >= 'a' && c <= 'z')
		{
			hash.insert(c);    
		}
		if (c == '}')
		{
			break;
		}
	}
		cout << hash.size() << endl;
		return 0;
	
}*/