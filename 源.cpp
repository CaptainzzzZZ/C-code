#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
///4.18





//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int temp=0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		a = temp;
//		a = b;
//		b = temp;
//	}
//	if (a < c)
//	{
//		a = temp;
//		a = c;
//		c = temp;
//
//	}
//	if (b < c)
//	{
//		b = temp;
//		b = c;
//		c = temp;
//
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (0 == i % 3)
//			printf("%d ", i);
//
//	}
//	printf("\n");
//
//	return 0;
//}


//最大公倍数
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100; i++)
//	{
//		if (0 == i % 4 && 0 == i % 6)
//			printf("%d ", i);
//	}
//	printf("\n");
//	return 0;
//}

//最大公约数
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//
//	int temp = 0;
//	while (1)
//	{
//		if (0 == m % temp && 0 == n % temp)
//		{
//
//			m--;
//
//			printf("%d", temp);
//			break;
//		}
//	}
//		return 0;
//}


//int main()
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			k = i * j;
//			printf("%d*%d=%d  ", i, j, k);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[7] = { 5,6,3,9,4,1,53 };
//	int i = 0;
//	int j = 0;
//
//	int temp = 0;
//	for (i = 0; i <5; i++)
//	{
//		for (j = 0; j < 5-i; j++)
//		{
//			if (arr[i] < arr[i + 1])
//			{
//				arr[i] = temp;
//				arr[i+ 1] = arr[i];
//				arr[i + 1] = temp;
//
//			}
//		}
//
//	}
//	for (i = 0;i<7; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}