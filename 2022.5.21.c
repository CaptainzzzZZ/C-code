#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//int main()
//{
//    int n = 0, i = 0;
//    scanf("%d", &n);
//    float a = 0;
//    float sum = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%f", &a);
//        sum = sum + a;
//    }
//    printf("%f", (sum / n));
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    double n = 0;
//    int i = 0;
//    double x = 0;
//    double sum = 0;
//    scanf("%lf", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%lf", &x);
//        sum += x;
//    }
//    printf("%lf %.5f", sum, sum / n);
//    return 0;
//
//}



#include<stdio.h>


int main()
{
    int n = 0;
    scanf("%d", &n);
    int a=0;
    int i = 0;
    int max = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a);
        if (a> max)
            max = a;
    }
    printf("%d", max);
    return 0;
}