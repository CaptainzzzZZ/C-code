#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//���������գ�
//��ӡ������
int y, m, d;
int run[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
int ping[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
int week[7] = { 1,2,3,4,5,6,7 };
void printstar()
{
	printf("***************************\n");
}
void printhead()
{
	printf("\t������\n");
	printstar();

	int i = 1;
	for (i = 0; i < 7; i++)
	{
		printf("%d\t", week[i]);
	}
	printf("\n");
}
int run_ping(int y)
{
	if ((y % 4 == 0) && (y % 100 != 0) || y % 400 == 0)
		return 366;
	else
		return 365;
}
//1900 1.1 ������һ��
int daysum(int y, int m, int d, int run[], int ping[])
{
	int i = 1900,sum=0;
	for (i = 1900; i <= y; i++)
	{
		int t = run_ping(y);
		if (t == 366)
		{
			sum = sum + 366;
		}
		else
		{
			sum = sum + 365;
		}
	}
	for (i = 0; i < m - 1; i++)
	{
		int te = run_ping(y);
		if (te == 366)
		{
			sum = sum + run[i];
		}
		else
		{
			sum = sum + ping[i];
		}
	}
	return sum;
}
//��ӡ������
void printcalendar(int daysum, int y, int m)
{
	int empty, full, i;
	empty = daysum % 7;//�·�ǰ��������������7����������
	for (i = 0; i < empty; i++)
	printf("\t");
	full = 7 - empty;
	if (run_ping(y) == 366)
	{
		//�����0��ʼ��
		//�·ݴ�1��ʼ��
		for (i = 1; i < run[m - 1]; i++)
		{
			printf("%d\t", i);
			if (i == full || (i - full) % 7 == 0)
			{
				printf("\n");
			}
		}
		printf("\n");

	}
	else
	{
		for (i = 1; i < ping[m - 1]; i++)
		{
			printf("%d\t", i);
			if (i == full || (i - full) % 7 == 0)
			{
				printf("\n");
			}
		}
		printf("\n");

	}
}

int main()
{
	printf("�����������գ�");
	scanf("%d %d %d", &y, &m, &d);
	printhead();
	int sum = daysum(y, m, d, run, ping);
	printcalendar(sum, y, m);

	return 0;
}