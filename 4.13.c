#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main()
//{
//	int a = 6; //a :0000 0110
//	printf("%d\n", ~a);//~a :1111 1001;ȡ����1111 1000 ȡԭ 1000 0111
//	return 0;//-7
//}


//int main()
//{
//	printf("%c\n", '\141');//a��ASC����ֵ97 1*64+4*8+1*1
//	printf("%c\n", '\060');//0��ASC����ֵ48
//	printf("%c\n", '\x3D');//3*16+D(13)*1
//
//	return 0;
//}

//int main()
//{
//    int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case '0':
//		printf("����һ"); break;
//	case 2:
//		printf("���ڶ�"); break;
//	case 3:
//		printf("������"); break;
//	case 4:
//		printf("������"); break;
//	case 5:
//		printf("����5"); break;
//	case 6:
//		printf("����6"); break;
//	case 7:
//		printf("������"); break;
//	default:
//		printf("err");
//	}
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	int arr[5] = { 0,1,2,3,4 };
//	for(i=0;i<5;i++)
//	printf("%d ", arr[i]);
//	return 0;
//}


//int main()//ð������
//{
//	int i,j;
//	int temp;
//	int arr[5] = { 5,6,70,8,32 };
//	for(i=0;i<4;i++)
//		for(j=0;j<4-i;j++)
//			if (arr[i] > arr[i + 1])
//			{
//				temp = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = temp;
//
//			}
//	for (i = 0; i < 5; i++)
//		printf("%d ", arr[i]);
//
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	while (a < 10)
//	{
//		a++;
//		if (6 == a)
//		{
//			break;
//			//continue;
//		}
//		printf("%d ", a);
//		//a++;
//	}
//
//
//
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//		//putchar(ch);
//		printf("%c ", ch);
//
//	return 0;
//}

//int main()
//{
//	int password[20] = { 0 };
//	printf("����������:");
//	scanf("%s", password);//���������������һ��Ԫ�صĵ�ַ��
//	printf("��ȷ�����룺");
//	//getchar();
//	int ch = getchar();
//	while ((ch = getchar())  == ' ')
//	{
//		;
//	}
//	if (ch=='t')
//		printf("�ɹ�");
//	else
//		printf("ʧ��");
//
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	while ((ch = getchar())!=EOF)
//	{
//		if(ch<'0'||ch>'9')
//		continue;
//	}
//	printf("%s\n", ch);
//	return 0;
//}



 