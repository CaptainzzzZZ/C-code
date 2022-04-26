#define _CRT_SECURE_NO_WARNNING

#include<stdio.h>


//int change(int x)
//{
//	x = x - 1;
//	return x;
//}
//int main()
//{
//
//	int a = 666;
//	printf("%d\n", a);
//	int b=change(a);
//	printf("%d\n", b);
//
//	return 0;
//}

//void NUM()
//{
//	;
//}
//
//int main()
//{
//	int i = 0;
//	int num = 666;
//	for (i = 1; i <= 10; i++)
//	{
//		NUM();
//		num++;
//
//		printf("%d ", num);
//	}
//	return 0;
//}


//void Add(int* p)
//{
//	(* p)++;
//}
//
//int main()
//{
//	int num = 66;
//	Add(&num);
//	printf("%d ", num);
//	Add(&num);
//	printf("%d ", num);
//	Add(&num);
//	printf("%d ", num);
//	Add(&num);
//	printf("%d ", num);
//	return 0;
//}

//函数的链式访问
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	//成功时，将返回写入的字符总数。
//	return 0;
//}


//函数的嵌套调用

//#include "Add.h"

//int main()
//{
//	int a = 666;
//	int b = 6666;
//	int c = Add(a, b);
//	printf("%d\n", c);
//
//
//	return 0;
//}


#include"add.h"

int main()
{
	int i = 0;
	int num = 0;
	for (i = 0; i < 10; i++)
	{
		add(&num);
		printf("%d ", num);
	}
	return 0;
}