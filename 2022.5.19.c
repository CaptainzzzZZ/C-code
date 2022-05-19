#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//int main()
//{
//    int a, b;
//    char ch;
//    scanf("%d %d %c", &a, &b, &ch);
//    switch (ch)
//    {
//    case '+':
//        printf("%d", a + b); break;
//    case '-':
//        printf("%d", a - b); break;
//    case '/':
//        if (0 == b)
//        {
//            printf("Divided by zero!");
//        }
//        else
//            printf("%d", a / b); break;
//    case '*':
//        printf("%d", a * b); break;
//    default:
//        printf("Invalid operator!"); break;
//
//    }
//    return 0;
//}


//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    double x1=0, x2=0;
//    double a, b, c;
//    scanf("%lf %lf %lf", &a, &b, &c);
//    if (b * b - 4 * a * c < 0)
//    {
//        printf("No answer!");
//    }
//    else if (b * b - 4 * a * c == 0)
//    {
//        printf("x1=x2=%.5lf", -(b / 2 * a));
//    }
//    else
//    {
//        if (b >= 0)
//        {
//            printf("x1=%.5lf£»x2=%.5lf", (-b) - sqrt(b * b - 4 * a * c) / 2 * a, (-b) + sqrt(b * b - 4 * a * c) / 2 * a);
//        }
//        else
//        {
//            printf("x1=%.5lf£»x2=%.5lf", (-b) + sqrt(b * b - 4 * a * c) / 2 * a, (-b) - sqrt(b * b - 4 * a * c) / 2 * a);
//        }
//    }
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//
//    int n = 0;
//    int i = 0;
//    int x = 0;
//    double total = 0;
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &x);
//        total += x;
//    }
//
//    printf("%.2lf", total / n);
//    return 0;
//}