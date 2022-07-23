#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>


//int main()
//{
//	
//	int n = 0;
//	int i = 0;
//	int x = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	for(i=0;i<n;i++)
//	{
//		scanf("%d", &x);
//		sum = sum + x;                      
//	}
//	printf("%d %.5lf", sum,sum*1.0/n);
//	return 0;
//}


//int main()
//{
//	int k = 0,x=0;
//	int count1 = 0, count2 = 0, count3 = 0;
//	scanf("%d", &k);
//	int i = 0;
//	for (i = 0; i < k; i++)
//	{
//		scanf("%d", &x);
//		if (1==x)
//		{
//			count1++;
//		}
//		else if (5==x)
//		{
//			count2++;
//		}
//		else if (10 == x)
//		{
//			count3++;
//		}
//	}
//	printf("%d\n", count1);
//	printf("%d\n", count2);
//
//	printf("%d\n", count3);
//
//	return 0;
//}


//int main()
//{
//	int	n = 0;
//	int arr[30] = { 1,1 };
//	scanf_s("%d", &n);
//	int a = 0;
//	while (n--)
//	{
//		scanf_s("%d", &a);
//		for (int i = 2; i <= a; i++)
//		{
//			arr[i] = arr[i - 1] + arr[i - 2];
//		}
//		printf("%d\n", arr[a-1]);
//
//	}
//	
//	return 0;
//}


//int main()
//{
//	int arr[30] = { 1,1 };
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 2; i <= n; i++)
//	{
//		arr[i] = arr[i - 1] + arr[i - 2];
//	}
//	printf("%d", arr[n]);
//	return 0;
//}


	int main()
	{
		long long a, b, c;
		int x=0;
		scanf("%lld %lld %lld", &a, &b, &c);
		for(x=2;x<=a&&x<=b&&x<=c;x++)
		{
			if (a % x == b % x && b % x == c % x)
			{
                printf("%d", x);
			    break;
			}
			
		}
		return 0;
	}