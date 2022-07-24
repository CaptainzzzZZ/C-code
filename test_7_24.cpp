#define _CRT_SECURE_NO_WARNINGS

//#include<iostream>
//using namespace std;
//int is_prime(int x)
//{
//	if (x == 0 || x == 1)
//		return 0;
//	for (int i = 0; i * i <= x; i++)
//	{
//		if (x % i == 0)
//		{
//			return 0;
//		}
//		else
//			return 1;
//	}
//}
//
//#define MAX_SIZE 16382
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	int x = 0;
//	int arr[10000] = { 0 };
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> x;
//		arr[i] = x;
//		ret = is_prime(arr[i]);
//	}
//	cout << ret << endl;
//	return 0;
//}


//#include<stdio.h>
//
//int fun(int n)
//{
//	if (n == 1)
//		return 1;
//	return n + fun(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fun(n);
//	printf("%d", ret);
//}

//#include<stdio.h>
//
//int fun(int n)
//{
//	if (1 == n || 2 == n)
//		return 1;
//	else
//		return fun(n - 1) + fun(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fun(n);
//	printf("%d", ret);
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//	int a = 0;
//	cin >> a;
//	cout << a << endl;
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int b = 20;
//	const int a = 10;
//	//a = 20;//error
//	
//	const int* const p = &a;
//	*p = 20;//err
//	p = &b;//err
//	printf("%d", a);
//	return 0;
//
//}
