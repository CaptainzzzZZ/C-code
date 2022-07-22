#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//void test2()
//{
//	printf("...");
//}
//
//void test1()
//{
//	test2();
//}
//
//void test()
//{
//	test1();
//}
//
//int main()//调用堆栈 就是看函数的调用逻辑
//{
//	test();
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int i = 0;
//
//	for (i = 0; i <=13; i++)
//	{
//		arr[i] = 0;
//		printf("111");
//	}
//	return 0;
//
//}

#include<string.h>

//void my_strlen(char* dest, char* scr)
//{
//	while (*scr != '\0')
//	{
//		*dest = *scr;
//		*dest++;
//		*scr++;
//	}
//	*dest = *scr;
//}

//void my_strlen(char* dest, char* scr)
//{
//	while (*scr != '\0')
//	{
//		*dest++ = *scr++;
//
//	}
//	*dest = *scr;
//}

void my_strlen(char* dest, char* scr)
{
	while (*dest++=*scr++)
	{
		;
	}
}

int main()
{
	char arr1[] = "xxxxxxxxxxxxxxxxxxxxxx";
	char arr2[] = "hello world";
	//strcpy(arr1, arr2); 
	my_strlen(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}