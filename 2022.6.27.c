#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//int fun()
//{
//	static int a = 1;
//	return ++a;
//}
//int main()
//{
//	int ret = 0;
//	ret = fun() + fun() * fun();
//	printf("%d", ret);
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//    int n = 0, i = 0, j = 0;
//    double e = 1;
//    long long  ret = 1;
//    scanf("%d", &n);
//    for (i = 1; i <= n; i++)
//    {
//        e = e + 1.0 / (ret=ret * i);
//    }
//    
//    printf("%.10lf", e);
//    return 0;
//}



//#include<stdio.h>
//int main()
//{
//    long long m = 0;
//    int k = 0;
//    scanf("%lld %d", &m, &k);
//    int count = 0;
//    while (m != 0)
//    {
//        if (m % 10 == 3)
//            count++;
//        m=m / 10;
//    }
//    if (count == k)
//        printf("YES");
//    else
//        printf("NO");
//    return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	while (n != 1)
//	{
//		if (n % 2 == 1)
//		{
//			printf("%d*3+1=%d\n", n, n * 3 + 1);
//			n = n * 3 + 1;
//		}
//		else
//		{
//			printf("%d/2=%d\n", n, n / 2);
//			n /= 2;
//
//		}
//	}
//	printf("END\n");
//
//	return 0;
//}


int main()
{
	int arr[99] = { 1,1 };
	int n = 0;
	scanf("%d", &n);
	int a = 0;
	int i = 0;
	while (n--)
	{
		scanf("%d", &a);
	}
	for (i = 2; i <= a; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];

	}
	printf("%d\n", arr[a]);
	return 0;
}