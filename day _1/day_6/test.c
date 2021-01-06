 #define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()//求两个数的公约数。（1）
//{	
//	int m,n,t;
//	scanf("%d%d", &m, &n);
//	while (t = m % n)
//	{
//		m = n;
//		n = t;
//	}
//	printf("%d\n", n);
//	return 0;
//}
//#include<stdio.h>
//int main()//求两个数的公约数。（2）
//{	
//	int a = 0;
//	int b = 0;
//	int i = 0;
//	int t = 0;
//	int z = 1;
//	scanf("%d%d", &a, &b);
//	t = (a > b) ? a : b;
//	for (i = 1; i <= t; i++)
//	{
//		if (a % i == 0 && b % i == 0)
//			z = i;
//	}
//	printf("%d", z);
//
//	return 0;
//}
//#include<stdio.h>
//int main()//1--100内求三的倍数。
//{	
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//		if (i % 3 == 0)
//			printf("%d\n", i);
//	return 0;
//}
//#include<stdio.h>
//int main()//三个数的排序。
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int t = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if(a<b)
//	{
//		t = a;
//		a = b;
//		b = t;
//	}	
//	if (a < c)
//	{
//		t = a;
//		a = c;
//		c = t;
//	}
//	if (b < c)
//	{
//		t = b;
//		b = c;
//		c = t;
//	}
//	printf("%d %d %d\n", a, b, c);
//
//	return 0;
//
//}
