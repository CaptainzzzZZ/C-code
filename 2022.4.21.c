#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>


///����⺯��
//int main()
//{
//	//memcpy
//	char arr1[20] = { 0 };
//	char arr2[] = "xuexuekuhanshu";
//	memcpy(arr1, arr2, 10);
//	printf("%s\n", arr1);
//	return 0;
//}


//int main()
//{
//	///memset �ڴ�����
//	char arr[20] = "ilovewyt";
//	memset(arr, '~', 3);
//	puts(arr);
//	printf("\n%s\n", arr);
//
//	return 0;
//}



//int main()
//{
//
//	//memcmp �Ƚ������ַ�����
//
//	char arr1[] = "66665";
//	char arr2[] = "66666";
//	int a = memcmp;
//	memcmp(arr1, arr2, 5);
//	if (a > 0)
//	{
//		printf("arr1��arr2��\n");
//	}
//	else if (a < 0)
//	{
//		printf("arr1��arr2С\n");
//
//	}
//	else
//	{
//		printf("arr1��arr2һ����\n");
//	}
//	return 0;
//}


//int main()
//{
//	//strcmp//�ַ����Ƚ�
//	char arr1[] = "666661";
//	char arr2[] = "666666";
//	int a = strcmp;
//	strcmp(arr1, arr2);
//	if (0 != a)
//	{
//		printf("arr1,arr2�����");
//
//	}
//	else
//	{
//		printf("arr1,arr2���");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>

int main()
{
    char key[] = "apple";
    char buffer[80];
    do {
        printf("Guess my favorite fruit? ");
        //fflush(stdout);
        scanf("%79s", buffer);
    } while (strcmp(key, buffer) != 0);
    puts("Correct answer!");
    return 0;
}