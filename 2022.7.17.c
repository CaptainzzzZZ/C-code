#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//struct b 
//{
//	char c;
//	short b;
//	double d;
//};
//
//struct stu
//{
//	struct b sb ;
//	char name[20];
//	int age;
//	char id[20];
//}s1 = { {'w',2,3.14},"zhangsan",20,"2021012777"};
//
//
//int main()
//{
//	//struct stu s2 = { {'w',2,3.14} ,"lisi",20,202102222};
//	printf("%s", s1.name);
//
//	printf("%s", s1.sb.b);
//	//printf("%d", s2.sb.c);
//	//struct stu* ps = &s2;
//	//printf("%d", (*ps).age);
//	return 0;
//}

struct b
{
	short s;
};

struct stu 
{
	struct b b;
	char c;
	int a;
	double d;
};

void print1(struct stu s1)
{
	printf("%d""%c""%d""%lf\n", s1.b.s, s1.c, s1.a, s1.d);
}

void print2(struct stu* ps)
{
	printf("%d""%c""%d""%lf", ps->b.s, ps->c, ps->a, ps->d);
}

int main()
{
	struct stu s1 = { {6},'c',2,3.3 };
	print1(s1);
	struct stu* ps = &s1;
	print2(ps);
	return 0;
}