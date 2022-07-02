#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//void sort(int arr[], int sz)
//{
//	int i = 0, j = 0;
//	int temp = 0;
//	for (i = 0; i < sz-1; i++)
//	{
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d  ", arr[i]);
//	}
//}
//
//int main()
//{
//
//	int arr[] = { 9,6,3,5,8,2,1,0,6,3 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	sort(arr, sz);
//	return 0;
//
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 4;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//			right = mid - 1;
//		else if (arr[mid] < k)
//			left = mid + 1;
//		else
//		{
//			printf("找到了");
//			break;
//		}
//	}
//	if (left > right)
//		printf("找不到");
//	return 0;
//}


//int main()
//{
//	int a = 6;
//	int* pa = &a;
//	printf("%d", sizeof(pa));
//	return 0;
//}

//int main()
//{
//	int a = 0, b = 0,ret=1;
//	scanf("%d %d", &a, &b);
//	int i = 0;
//	while (b--)
//	{
//		ret = ret * a;
//		ret = ret % 1000;
//	}
//	printf("%03d", ret);
//	return 0;
//}

//int main()
//{
//	int a=6, b=5, n=1;
//	//scanf("%d %d %d", &a, &b, &n);
//	float ret = a * 1.0 / b;
//	ret = ret - (int)ret;
//	int i = 0;
//	for (i = 0; i < n-1 ; i++)
//	{
//		ret = ret * 10.0;
//		ret = ret - (int)ret;
//	}
//	printf("%d", (int)(ret * 10));
//
//
//	return 0;
//}


