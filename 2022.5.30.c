#include<stdio.h>
//整形提升
int main()
{
	char a = 3;
	//00000000000000000000000000000011
	//截断变成00000011
	char b = 127;
	//00000000000000000000000001111111
	//01111111
	char c = a + b;
	//00000000000000000000000010000010——补码
	//00000000000000000000000010000001——反码
	
	printf("%d", c);
	return 0;
}