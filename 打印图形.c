/*
输入格式
第一行中给出正方形的边长(3<=N<=20)和组成正方形边的某种字符C，间隔一个空格。
输出格式
   由给定字符C画出正方形。但是注意到行间距比列间距大，所以为了让结果看上去更
   像正方形，所输出的行数实际上是列数的50%（四舍五入取整）
   样例输入
   10 a
   样例输出
   aaaaaaaaaaa
   a         a
   a         a
   a         a
   aaaaaaaaaaa
   思路
   由于行数是列数的一半，因此当列col是奇数时row=col/2+1
   当列数col为偶数是，行数row就是col/2；
   */

/*#include<stdio.h>
int main()
{
	int row, col;
	char c;
	scanf_s("%d %c", &col, &c);
	if (col % 2 == 1)
		row = col / 2 + 1;
	else
	{
		row = col / 2;
	}
	for (int i = 0; i < col; i++)
	{
		printf("%c", c);
	}
	printf("\n");
	for (int i = 0; i < row; i++)
	{
		printf("%c", c);
		for (int j = 0; j < col - 2; j++)
		{
			printf(" ");
		}
		printf(" % c", c);
		printf("\n");
	}
	for (int i = 0; i < col; i++)
	{
		printf("%c", c);
	}

	return 0;

}*/