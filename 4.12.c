#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main()
//{
//	printf("今天学循环\n");
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a > 20)
//		printf("上大学");
//	else
//		printf("上高中");
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a < 18)
//		printf("小孩");
//	else if (a >= 18 && a < 28)
//		printf("青年");
//	else if (a > 28 && a < 50)
//		printf("壮年");
//	else
//		printf("老年");
//
//	return 0;
//}

//int main()
//{
//	int i, j, k;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = i; j < 10; j++)
//		{
//			k = i * j;
//				printf("%d*%d=%d\t", i, j, k);
//		}
//		printf("\n");
//		}
//	return 0;
//}


//int main()
//{
//	int a = 1, b = 2;
//	if (a > b)   //错误  下面的ifelse没机会  所以直接打印\n了
//		if (b > a)
//			printf("%d\n", a);
//		else
//			printf("%d\n", b);
//	printf("\n");
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (1 == a % 2)
//		printf("a是奇数");
//	else
//		printf("a是偶数");
//
//
//
//
//	return 0;
//}


int main()
{
	int i = 0;
	for (i = 0; i <= 100; i++)
		if (1 == i % 2)
			printf("%d ", i);

	return 0;
}