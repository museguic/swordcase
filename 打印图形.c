/*
�����ʽ
��һ���и��������εı߳�(3<=N<=20)����������αߵ�ĳ���ַ�C�����һ���ո�
�����ʽ
   �ɸ����ַ�C���������Ρ�����ע�⵽�м����м�������Ϊ���ý������ȥ��
   �������Σ������������ʵ������������50%����������ȡ����
   ��������
   10 a
   �������
   aaaaaaaaaaa
   a         a
   a         a
   a         a
   aaaaaaaaaaa
   ˼·
   ����������������һ�룬��˵���col������ʱrow=col/2+1
   ������colΪż���ǣ�����row����col/2��
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