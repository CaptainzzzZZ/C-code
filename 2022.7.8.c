#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	//���컹��ָ��
//	// int *p;
//	//int* p = NULL;
//	//*p = 20;//Ұָ�� 
//	int arr[10] = { 0 };
//	int* p = arr;
//	for (int i = 0; i <= 10; i++)
//	{
//		*p = i;//Ұָ�� �������ʷ�Χ
//	}
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//
//	printf("%lld", &arr[9] - &arr[0]);
//	//����ָ�����   ��ֵ��������ָ����Ԫ�ظ���
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int* p2 = &arr[9];
//
//	for (int i = 0; i < 10; i++)
//	{
//		if (*p <= *p2)
//		{
//			printf("%d  ", *p);
//		}
//		p++;
//	}
//	return 0;
//}


//�ַ�������
#include<string.h>

//int mystrlen(char* ch)
//{
//	int count = 0;
//	while (*ch != '\0')
//	{
//		count++;
//		ch++;
//	}
//	return count;
//}

int mystrlen(char* ch)
{
	char* p = ch;
	while (*ch != '\0')
	{
		ch++;
	}
	return ch - p;
}



int main()
{
	char ch[] = "qwert";
	//int len = strlen(ch);
	int len = mystrlen(ch);
	printf("%d", len);
	return 0;
}