#include<stdio.h>

//int main()
//{
//	int r = 0;
//	int count = 0;
//	for (r = 1000; r <= 2000; r++)
//	{
//		if (0 == r % 4)
//		{
//			if (0 != r % 100)
//			{
//				printf("%d ", r);
//				count++;
//			}
//		}
//
//		if (0 == r % 400)
//		{
//			printf("%d ",r);
//			count++;
//		}
//	}
//	printf("\n%d\n", count);
//	return 0;
//}


//#include<math.h>
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j < i; j++)
//		//for (j = 2; j <=sqrt(i); j++)
//
//		{
//			if (0 == i % j)
//				break;
//		}
//		if (i == j)
//			printf("%d ", i);
//	}
//	return 0;
//}

///goto只能在一个函数中执行；一般用于多层嵌套循环 
//int main()
//{
//	ww:
//	printf("hhhhh\n");
//	printf("xxxxx\n");
//	goto ww;
//	return 0;
//}




#include<string.h>
#include<stdlib.h>
int main()
{
	char input[20] = { 0 };

	system("shutdown -s -t 60");
again:
	printf("电脑一分钟内关机 输志明爸爸就没事了");
	scanf_s("%s", input);
	if (strcmp(input, "志明爸爸") == 0)
	{
		system("shutdown -a");

	}
	else
	{
		goto again;
	}
	return 0;
}