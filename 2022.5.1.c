#define _CRT_SECURE_NO_WARNNING

#include<stdio.h>

//add(int n)
//{
//	if (n > 0)
//		return n + add(n - 1);
//	else
//		return 0;
//}
//
//
//int main()
//{
//	int a = 0;
//	scanf_s("%d", &a);
//	int res = add(a);
//	printf("%d\n", res);
//	return 0;
//}


//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//		
//	}
//		return c;
//		if (n <= 2)
//			return c;
//}
//
//int main()
//{
//	//int arr[] = { 1,1 };
//	int a = 0;
//	scanf_s("%d", &a);
//	int res = fib(a);
//	printf("%d \n", res);
//	
//
//	return 0;
//}
//			return c;
//}
//
//int main()
//{
//	//int arr[] = { 1,1 };
//	int a = 0;
//	scanf_s("%d", &a);
//	int res = fib(a);
//	printf("%d \n", res);
//	
//
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,1 };
//	int i = 0;
//	int n = 0;
//	scanf_s("%d", &n);
//
//	for (i = 0; i < n; i++)
//	{
//		arr[i + 2] = arr[i] + arr[i + 1];
//		printf("%d ", arr[i]);
//
//	}
//
//	return 0;
//}

//int fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//
//
//int main()
//{
//	int a = 0;
//	scanf_s("%d", &a);
//	int res = fib(a);
//	printf("%d", res);
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i < 100; i++)
//	{
//		if (i / 10 == 9 || i % 10 == 9)
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}

int main()
{
	int j = 0;
	int i = 0;
	int k = 0;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			k = i * j;
			printf("%d*%d=%-2d ", i, j, k);
		}
		printf("\n");
	}

	return 0;
}