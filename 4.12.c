#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main()
//{
//	printf("����ѧѭ��\n");
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a > 20)
//		printf("�ϴ�ѧ");
//	else
//		printf("�ϸ���");
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a < 18)
//		printf("С��");
//	else if (a >= 18 && a < 28)
//		printf("����");
//	else if (a > 28 && a < 50)
//		printf("׳��");
//	else
//		printf("����");
//
//	return 0;
//}

//int main()
//{
//	int i, j, k;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = i; j < 10; j++)
//		{
//			k = i * j;
//				printf("%d*%d=%d\t", i, j, k);
//		}
//		printf("\n");
//		}
//	return 0;
//}


//int main()
//{
//	int a = 1, b = 2;
//	if (a > b)   //����  �����ifelseû����  ����ֱ�Ӵ�ӡ\n��
//		if (b > a)
//			printf("%d\n", a);
//		else
//			printf("%d\n", b);
//	printf("\n");
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (1 == a % 2)
//		printf("a������");
//	else
//		printf("a��ż��");
//
//
//
//
//	return 0;
//}


int main()
{
	int i = 0;
	for (i = 0; i <= 100; i++)
		if (1 == i % 2)
			printf("%d ", i);

	return 0;
}