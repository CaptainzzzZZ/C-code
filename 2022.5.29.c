#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main()
//{
//	struct book
//	{
//		char name[30];
//		char author[30];
//		int price;
//	};
//
//	struct book b = { "cyuyan","captain",60 };
//	struct book* pb = &b;
//
//	printf("%s\n", pb->name);
//	printf("%s\n", pb->author);
//
//	//printf("%s", (*pb).author);
//	//printf("%s", (*pb).name);
//	//printf("%d", (*pb).price);
//
//
//	//printf("%s\n", b.name);
//	//printf("%s\n", b.author);
//	//printf("%d\n", b.price);
//
//
//	return 0;
//}

//int main()
//{
//	struct class
//	{
//		int score[40];
//	};
//
//	struct class s = { 98,96,93,66,78,77,11 };
//	struct class* ps = &s;
//	printf("%d\n", s.score[1]);
//	printf("%d\n", (*ps).score[3]);
//	printf("%d\n", ps->score[5]);
//
//	return 0;
//}


//#include<stdio.h>
int main()
{
    int n;
    int count = 0;

    scanf("%d", &n);
    int i = 0, x;
    while (n--)
    {
        scanf("%d", &x);
        if ((x % 10) - (x / 1000) - (x / 100 % 10) - (x / 10 % 10) > 0)
            count++;

    }
 
       
    printf("%d", count);
    return 0;
}