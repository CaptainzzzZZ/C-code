#define _CRT_SECURE_NO_WARNING 

#include<stdio.h>

//void tab(int n)
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			k = i * j;
//			printf("%d*%d=%d ", i, j, k);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	tab(n);
//
//
//	return 0;
//}

//int fun(int n)
//{
//	if (5 == n)
//	{
//		return 2;
//	}
//	else
//		return 2 * fun(n + 1);
//}
//
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int num=fun(n);
//	printf("%d", num);
//	return 0;
//}

//#include<string.h>
//
//
//void unstring(char* str)
//{
//	int left = 0;
//	int right = strlen(str)-1;
//	while (left < right)
//	{
//		char temp = str[left];
//		str[left] = str[right];
//		str[right] = temp;
//		left++;
//		right--;
//	}
//
//}
//
//
//int main()
//{
//	char arr[] = "qwert";
//	unstring(arr);
//	printf("%s\n", arr);
//
//	return 0;
//}