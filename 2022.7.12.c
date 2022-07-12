#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main()
//{
//	//指针和数组
//	int arr[10] = { 0 };
//	int i = 0;
//	int* p = arr;
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%p==%p\n", &arr[i], (p + i));
//	}*/
//
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	printf("%d\n", arr[0]);
//	printf("%d\n", 0[arr]);
//	printf("%d\n", 0[arr]);
//	printf("%d", p[0]);
//	printf("%d", 0[p]);
//	return 0;
//}


//二级指针
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int** pp = &p;
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		*(*pp + i) = i;
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//指针数组 存放指针的数组
//int main()
//{
//	int arr[10] = { 0 };
//	int* parr[10] = {arr};
//	printf("%p\n", *parr);
//	printf("%d",* *parr);
//
//	return 0;
//}


//数组指针 一个指向数组首地址的指针


