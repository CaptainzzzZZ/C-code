#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>


//��ϰ4.15 whileѭ����
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9};
//	int k = 0;
//	scanf("%", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//
//		if (arr[mid] > k)
//			right = mid - 1;
//		else if (arr[mid] < k)
//			left = mid + 1;
//		else
//		{                         //һ������� ��Ȼ��һ�¾�����ѭ����
//			printf("�ҵ���");
//			break;
//		}
//	}
//	if (left > right)
//		printf("�Ҳ���");
//	return 0;
//}



//ð������ϰ
//int main()
//{
//	int arr[] = { 2,45,5,25,3,5,34,5 };
//	int i = 0;
//	int j = 0;
//	int temp = 0;
//	for (i = 0; i < sizeof(arr)/sizeof(arr[0]) - 1; i++)
//	{
//		for (j = 0;j< sizeof(arr) / sizeof(arr[0]) - 1-i; j++)
//			if (arr[j] < arr[j + 1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//
//				arr[j + 1] = temp;
//			}
//		printf("%d ",arr[j]);
//
//	}
//	return 0;
//}


#include<stdlib.h>
#include<time.h>

///���Բ�������Ϸ��

void menu()
{
	printf("************************\n");
	printf("****** 1.��ʼ��Ϸ ******\n");
	printf("****** 0.�˳���Ϸ ******\n");
	printf("************************\n");

}
void game()
{
	int res = rand();
	//printf("%d ", res);
	int guess = 0;

	while(1)
	{
		printf("��������Ľ����");
		scanf("%d", &guess);


		if (guess > res)
		{
			printf("�´���\n");
		}
		else if (guess < res)
		{
			printf("��С��\n");
		}
		else
		{
			printf("nb"); break;
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	
	do
	{
		menu();//�˵���
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game(); break;
		case 0:
			printf("�˳���Ϸ"); break;
		default:
			printf("��������������룡��"); break;
			
		}
		
	} while (input);

	return 0;
}
