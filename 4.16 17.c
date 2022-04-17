#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>


//复习4.15 while循环；
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
//		{                         //一个代码块 不然第一下就跳出循环了
//			printf("找到了");
//			break;
//		}
//	}
//	if (left > right)
//		printf("找不到");
//	return 0;
//}



//冒泡排序复习
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

///试试猜数字游戏；

void menu()
{
	printf("************************\n");
	printf("****** 1.开始游戏 ******\n");
	printf("****** 0.退出游戏 ******\n");
	printf("************************\n");

}
void game()
{
	int res = rand();
	//printf("%d ", res);
	int guess = 0;

	while(1)
	{
		printf("请输入你的结果：");
		scanf("%d", &guess);


		if (guess > res)
		{
			printf("猜大了\n");
		}
		else if (guess < res)
		{
			printf("猜小了\n");
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
		menu();//菜单；
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game(); break;
		case 0:
			printf("退出游戏"); break;
		default:
			printf("输入错误，重新输入！！"); break;
			
		}
		
	} while (input);

	return 0;
}
