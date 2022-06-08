#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#define pi 3.14
void szys()
{
	int a=0, b=0;
	char ch = 0;
	printf("请输入a，b的值和一个符号：");
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
	int x, p; //x为十进制数，p为目标进制大小 
	printf("请输入一个十进制数和你想要的目标进制");
	scanf("%d %d", &x,&p);
	int a[100] = { 0 }; //存放余数 
	int count = 0;
	do {
		a[count++] = x % p;
		x = x / p;
	} while (x != 0);//当商不为0时进行循环 

	for (int i = count - 1; i >= 0; i--)
	{
		printf("%d", a[i]);
	}
}


void sanjiao()
{
	double a,b,c,d;
	int n = 0;

	printf("请输入角度");
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
	printf("             简易计算器\n");
	printf("-------------------------------------\n");
	printf("             1.四则运算\n");
	printf("             2.进制转换\n");
	printf("             3.三角函数\n");
	printf("             4.推出程序\n");
	int input = 0;
	printf("请选择模式：");
	scanf("%d", &input);
	switch (input)
	{
	case 1:szys(); break;
	case 2:jzzh(); break;
	case 3:sanjiao(); break;
	case 4:break;
	default:printf("输入错误\n"); break;
	}




	return 0;
}