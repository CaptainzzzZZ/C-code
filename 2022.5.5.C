#include<stdio.h>

//int fun(int n)
//{
//	if (n <= 9)
//	{
//		return n;
//	}
//	else
//	{
//		return fun(n / 10) + n % 10;
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int sum = fun(n);
//	printf("%d\n", sum);
//
//
//	return 0;
//}

//¼ÆËãnµÄk´Ä·½

//float fun(int n, int k)
//{
//	if (0 == k)
//	{
//		return 1;
//	}
//	else if (0 < k)
//	{
//		return n * fun(n, k - 1);
//	}
//	else
//		return 1.0 / fun(n, -k);
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf_s("%d %d", &n, &k);
//	float ret = fun(n, k);
//	printf("%f\n", ret);
//
//	return 0;
//}

//int fun(int n)
//{
//	if (n <= 9)
//	{
//		return n;
//	}
//	else
//		return fun(n / 10);
//}
//
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int num = fun(n);
//	printf("%d ", num);
//	return 0;
//}