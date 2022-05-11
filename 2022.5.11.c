#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main()
//{
//	int arr[] = { 56,6262,941,620,6260,1,0,33 };
//	int i = 0;
//	int j = 0;
//	int temp = 0;
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0])-1; i++)
//	{
//		for (j = 0; j < sizeof(arr) / sizeof(arr[0]) - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//void bubble(int arr[],int sz)
//{
//		int i = 0;
//		int j = 0;
//		int temp = 0;
//		for (i = 0; i <sz-1; i++)
//		{
//			for (j = 0; j <sz - 1 - i; j++)
//			{
//				if (arr[j] > arr[j + 1])
//				{
//					temp = arr[j];
//					arr[j] = arr[j + 1];
//					arr[j + 1] = temp;
//				}
//			}
//		}
//		for (i = 0; i < sz; i++)
//		{
//			printf("%d ", arr[i]);
//		}
//}
//
//int main()
//{
//	int arr[] = { 146,999,666,333,5151,62623,330,0,11,22,3 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble(arr, sz);
//	return 0;
//}

//int main()
//{
//	int arr[] = {22,33};
//	printf("%p\n", arr);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr[0]);
//
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//    double a, b;
//    scanf("%lf %lf", &a, &b);
//    double k = a / b;
//    double r = a - k * b;
//    printf("%lf", r);
//    return 0;
//}

#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    int a = n % 10;
    int b = n / 10 % 10;
    int c = n / 100;
    printf("%d%d%d", a, b, c);
    return 0;
}