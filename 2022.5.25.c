#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>

//void swap(int* x, int* y)
//{
//	int temp = *x;
//	*x = *y;
//	*y = temp;
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("a=%d b=%d", a, b);
//
//	int* pa = &a;
//	*pa = 6;
//	swap(pa, &b);
//	printf("a=%d b=%d", a,b);
//	return 0;
//}

//int main()
//{
//	//int a = 0;
//	//int b = 6;
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int  n;
//    double x;
//    scanf("%lf %d", &x, &n);
//    for (int i = 0; i < n; i++)
//    {
//        x = x + x * 0.001;
//    }
//    printf("%lf", x);
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int n, a;
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d",&a);
//    }
//    int arr[10010] = { 1,1 };
//    for (int i = 2; i < a; i++)
//    {
//        arr[i] = arr[i - 1] + arr[i - 2];
//    }
//    printf("%d ", arr[a]);
//    return 0;
//}