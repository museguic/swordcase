/*����һ��������Сд��ĸ�ļ��ϡ�

�����жϣ������в�ͬ��ĸ��������

�����ʽ
����һ���ַ����������������Сд��ĸ���ϡ�

�ַ�����{ ��ʼ���� } �������м��г����м����а�����Сд��ĸ��Сд��ĸ����֮���ö��ţ�, ���ӿո񣨣�������

�����ʽ
һ����������ʾ�����в�ͬ��ĸ��������

���ݷ�Χ
ǰ 5 �����Ե����㣬�����а�������ĸ������[0, 10] ��Χ�ڡ�
���в��Ե����㣬�����а�������ĸ������[0, 333] ��Χ�ڡ�

��������1��
{ a, b, c }
�������1��
3
��������2��
{ b, a, b, a }
�������2��
2
��������3��
{}
�������3��
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
/*ʾ������*/
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