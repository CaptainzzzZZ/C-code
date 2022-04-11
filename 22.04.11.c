#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
//int main()
//{
//	printf("%d",sizeof(short)); 
//	printf("%d", sizeof(int));
//	printf("%d", sizeof(long));
////	printf("%d", sizeof(float));
//////	return 0;
////}
//int main()
//{
//	int a=0, b=0,sum=0;
//	
//	scanf("%d %d", &a, &b);
//	sum = a + b;
//	printf("%d", sum);
//	return 0;
//}
//int main()
//{
//	int a = 3;
//	while (a--)
//		printf("%d", a);
//}
//int main()
//{
//	int a=6;
//	switch (a)
//	{
//	case 1:printf("1");
//	case 5:printf("5");
//	case 6:printf("6");
//	default:printf("error");
//		
//	}
////	return 0;
////}
//int main()
//{
//	int i = 0,sum=0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++)
//
//	{
//		scanf("%d", &arr[i]);
//		sum = sum + arr[i];
//	}
//	int avg;
//	
//	
//	avg = sum / 10;
//	printf("\navg=%d", avg);
//
//
//	return 0;
//}
//int main()
//{
//	char ch1,ch2;
//	scanf("%c", &ch1);
//	ch2 = ch1 + 32;
//	printf("%c", ch2);
//
//
//	return 0;
////}
//int main()
//{
//	int i, n,sum=1;
//	scanf("%d", &n);//输入一个整数
//	for (i = 1; i <= n; i++)
//		sum = sum * i;
//	printf("%d", sum);
//
//
//	return 0;
////}
//int main()
//{
//	int a, b, c,temp;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a > b)
//	{
//		a = temp;
//		a = b;
//		b = temp;
//	}
//
////
////	return 0;
////}
//extern int a;
//int main()
//{
//	a = 3;
//	printf("%d", a);
////	return 0;
////}
//int main()
//{
//	const int a = 2;
//	int arr[a] = { 0 };
//	/*printf("%d", a);*/
//	return 0;
////}
//#define max 1000
//int main()
//{
//	int n = max;
//	printf("n=%d\n", n);
//	return 0;
////}
//#include<string.h>
//int main()
//{
//	char arr1[] = "abcd";
//	char arr2[] = { 'a','b','c' };
//	printf("%d", strlen(arr1));
//	printf("\n%d", strlen(arr2));
//	return 0;
//} 
//int main()
//{
//	printf("jkhvjn\?\?)");
//	return 0;
////}
//int main()
//{
//	printf("%c\n", '\'');
//	printf("%s\n", "\"captain\"");
//	printf("\a\a");
//	return 0;
//}
//int main()
//{
//	printf("%c\n", '\141');//a的ASCⅡ码值97
//	printf("%c\n", '\060');//0的ASCⅡ码值48
//
//	return 0;
//}
//Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int sum=Add(num1, num2);
//	printf("%d", sum);
//	return 0;
//}
//int main()
//{
//	int arr[9] = { 1,2,3,4,5,6,7,8,9 };
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d", arr[i]);
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int a = 9 / 2.0;
//	float b = 9 / 2.0;
//	printf("%f\n", b);
//	printf("%d", a);
//	return 0;
//}
////移位操作符
//int main()
//{
//	int a = 2;
//	int b = a << 1;
//	int c = a >> 1;
//	printf("%d\n", c);
//	printf("%d", b);
//	return 0;
//}
//int main()
//{
//	float a = 2;
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof (float));
//	printf("%d\n", sizeof a);
//	int arr[3] = { 0 };
//	printf("%d", sizeof(arr));
//	return 0;
//}

////////  ~ 按位取反 ！！！！！！！
//int main()
//{
//	int a = 1;//1=0000 0001
//	printf("%d\n", ~a);//~a=1111 1110此时为补码
//	//~a反码为1111 11101
//	//原码为  1000 00010 为-2
//
//	return 0;
//} 

//int main()
//{
//	int a = 3;
//	printf("%d\n", ~a);
//
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 2;
//	int c = a || b;
//	int d = a && b;
//	printf("%d\n", c);
//
//	printf("%d\n", d);
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c=a > b ? a:b;
//	printf("%d\n", c);
//
//	return 0;
//}

//int main()
//{
//	int a = sizeof(int);
//	int b = 6;
//	int c = 66;
//	int d = (c = a + b, c + a, b = a + b);
//	printf("d=%d\n", d);
//
//	return 0;
//}

//typedef long int i;
//int main()
//{
//	i a = 3;
//	printf("%d", a);
//	return 0;
//}

//int main()
//{
//	extern int a;
//
//	printf("%d", a);
//
//	return 0;
//}

//void add()
//{
//	int b = 10;
//
//}
//
//
//int main()
//{
//	void add();
//
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	for (i = 9; i>=0; i--)
//		printf("%2d", arr[i]);
//	return 0;
//}

//#define add(x,y) x+y
//int main()
//{
//	printf("%d\n", 3 * (add(3, 5)));
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[20] = { 1,1 };
//	for (i = 0; i < 20; i++)
//		arr[i+2]=arr[i] + arr[i+1];
//	for (i = 0; i < 20; i++)
//	{
//		if (i % 5 == 0)printf("\n");
//		printf("%d\t", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;//*pa就是指针；&a就是个地址；所以指针就是个地址
//	*pa = 101;//*pa是a的指针
//	printf("%d\n", a);
//
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//
//	return 0;
//}


//struct Stu
//{
//	int math;
//	float english;
//};
//int main()
//{
//	struct Stu Li = { 90,95.5 };
//	printf("%d  %f\n", Li.math,Li.english);
//	struct Stu* pLi = &Li;
//	printf("第二次:%d %f\n", (*pLi).math, ( * pLi).english);
//	printf("第三次:%d %f\n", pLi->math, pLi->english);
//
//	return 0;
//}

//struct class302
//{
//	int math[30];
//	int english[30];
//
//};
//
//
//int main()
//{
//	struct class302 yu = { 98,89 };
//	printf("%d %d\n", yu.math, yu.english);
//
//
//	return 0;
//
//}
//main() {
//	printf("\x32");
//}


//int main()
//{
//
//	int a = 3;
//	printf("%d\n", ~a);-4
//	return 0;
//}

int main()
{
	printf("...");
	return 0;
}