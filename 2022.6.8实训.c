#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#define pi 3.14
void szys()
{
	int a=0, b=0;
	char ch = 0;
	printf("������a��b��ֵ��һ�����ţ�");
	scanf("%d %d %c", &a, &b, &ch);
	if ('+' == ch)
		printf("%d", a + b);
	else if ('-' == ch)
		printf("%d", a - b);
	else if ('*' == ch)
		printf("%d", a * b);
	else if ('/' == ch)
	{
		if (0 == b)
		{
			printf("error");
		}
		else
		{
			printf("%d", a / b);
		}
	}
	printf("\n");
}


void jzzh()
{
	int x, p; //xΪʮ��������pΪĿ����ƴ�С 
	printf("������һ��ʮ������������Ҫ��Ŀ�����");
	scanf("%d %d", &x,&p);
	int a[100] = { 0 }; //������� 
	int count = 0;
	do {
		a[count++] = x % p;
		x = x / p;
	} while (x != 0);//���̲�Ϊ0ʱ����ѭ�� 

	for (int i = count - 1; i >= 0; i--)
	{
		printf("%d", a[i]);
	}
}


void sanjiao()
{
	double a,b,c,d;
	int n = 0;

	printf("������Ƕ�");
	scanf("%d", &n);
	a = sin(n * pi / 180); 
	b = cos(n * pi / 180);
	c = tan(n * pi / 180);

	printf("%f\n", a);
	printf("%f\n", b);
	printf("%f\n", c);

}


int main()
{
	printf("             ���׼�����\n");
	printf("-------------------------------------\n");
	printf("             1.��������\n");
	printf("             2.����ת��\n");
	printf("             3.���Ǻ���\n");
	printf("             4.�Ƴ�����\n");
	int input = 0;
	printf("��ѡ��ģʽ��");
	scanf("%d", &input);
	switch (input)
	{
	case 1:szys(); break;
	case 2:jzzh(); break;
	case 3:sanjiao(); break;
	case 4:break;
	default:printf("�������\n"); break;
	}




	return 0;
}