//#include<stdio.h>

//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf_s("%d %d", &a, &b);
//    printf("%d\n", a + b);
//    return 0;
//}

//#include<stdio.h>
//int mian()
//{
//    int a = 0, b = 0, c = 0;
//    scanf_s("%d %d %d", &a, &b, &c);
//    printf("%d", b);
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//    int a = 0, b = 0, c = 0;
//    scanf_s("%8d %8d %8d", &a, &b, &c);
//    printf("%11d %11d %11d", a, b, c);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    char c = 0;
//    scanf_s("%c",&c);
//    printf("  %c\n", c);
//    printf(" %c%c%c\n",c,c,c);
//    printf("%c%c%c%c%c\n",c,c,c,c,c);
//    return 0;
//}


#include<stdio.h>
int main()
{
    double a = 0, b = 0;
    scanf_s("%lf %lf", &a, &b);
    printf("%.9lf", a / b);
    return 0;
}