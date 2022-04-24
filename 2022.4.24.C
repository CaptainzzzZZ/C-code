#define _CRT_SECURE_NO_WARNNING

#include<stdio.h>

//getmax(int x, int y)
//{
//	int c = 0;
//		if (x > y)
//			c = x;
//		else
//			c = y;
//	return c;
//}
//int main()
//{
//	int a = 666;
//	int b = 6666;
//	int max = getmax(a, b);
//	//getmax(a, b);
//	printf("%d\n", max);
//	return 0;
//
//}

//int ryear(int n);
//{
//	if((0==n%4&&0!=n%100)||0==n%400)
//	//if (0 == n % 4 && 0 !=n % 100)
//	{
//		return 1;
//	}
//	return 0;
//	
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (1 == ryear(i))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//
//int search(int arr[], int k, int s)
//{
//	int left = 0;
//	int right = s - 1;
//	int mid = (left + right) / 2;
//	while (left <= right)
//	{
//
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//
//		}
//		else
//			return mid;
//	}
//	if (left > right)
//		return -1;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int key = 7;
//	int sz = sizeof(arr) / sizeof(int);
//	int res = search(arr, key, sz);
//	if (-1 == res)
//		printf("’“≤ªµΩ");
//	else
//		printf("’“µΩ %d\n", res);
//
//
//
//	return 0;
//}