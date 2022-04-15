#define _CRT_SECURE_NO_WARNINGS

 
#include<stdio.h>

//int main()
//{
//	int i = 0;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i < 10);
//	return 0;
//}


//int main()
//{
//	int i = 1,n,a=0;
//	scanf("%d", &n);
//	//int n;
//	for (i = 1; i <= n; i++) 
//	{
//		//a = a * i;
//		//a = +i;
//    }	
//	printf("%d", a);
//
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int n = 0;
//	int res = 1;
//	int sum = 0;
//	//for (n = 1; n <= 3; n++)
//	//{
//	//	res = 1;//每次进来要把res重置为1；
//	//	for (i = 1; i <= n; i++)
//	//	{
//	//		res = res * i;
//	//	}
//	//	sum += res;
//	//}
//
//
//	for (n = 1; n <= 3; n++)
//	{
//		res = res * n;
//		sum = sum + res;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}


//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	//int k = 17;
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz-1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//			left = mid + 1;
//		else if (arr[mid] > k)
//			right = mid - 1;
//		else
//		{
//			printf("找到了：%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("找不到");
//	
//	return 0;
//}