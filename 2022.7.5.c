#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>


//Ö¸Õë³õ½×
//void change(int* p,int *arr)
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) *=2;
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	change(p,arr);
//	return 0;
//}


//int main()
//{
//	int arr[5] = { 0,1,2,3,4 };
//	int* ptr = ( & arr + 1);
//	printf("%d", *(arr+1));
//	printf("%d", * (ptr - 1));
//	return 0;
//}


//struct test
//{
//	int a;
//	
//
//}*p;
//
//int main()
//{
//	printf("%d\n", sizeof(struct test));
//	printf("%p\n", (p + 1));
//	printf("%d\n", (unsigned long)p+1);
//	printf("%p\n", (unsigned long)p + 1);
//	printf("%p\n", (unsigned int*)p + 1);
//	return 0;
//}




//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;
//}


//int main()
//{
//	int arr[3][2] = { (1,2),(3,4),(5,6) };
//	int* p = arr[0];
//	printf("%d", p[0]);
//	return 0;
//}

//int main()
//{
//	int arr[5][5];
//	int(* p)[4];
//	p = arr;
//	printf("%p\n", &p[4][2] - &arr[4][2]);
//	//printf("%p\n", p[4][2] - arr[4][2]);
//	printf("%d", &p[4][2] - &arr[4][2]);
//	return 0;
//}


//int main()
//{
//	int arr[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p1 = (int*)(&arr + 1);
//	int* p2 = (int*)(*(arr + 1));
//	printf("%d\n", *(p1 - 1));
//	printf("%d\n", *(p2 - 1));
//	printf("%d", *p2 - 1);
//	return 0;
//}


//int main()
//{
//	char* ch [] = {"a","b","c"};
//	char** pc = ch;
//	pc++;
//	printf("%s",* pc);
//	return 0;
//}


int main()
{
	char* ch[] = { "abcde","qwert","wasd","xyz"};
	char** c[] = { ch + 3,ch + 2,ch + 1,ch};
	char*** c1 = c;
	printf("%s\n", **++c1);
	printf("%s\n", *-- * ++c1 + 3);
	printf("%s\n", *c1[-2] + 3);
	printf("%s\n", c1[-1][-1] + 1);

	return 0;
}