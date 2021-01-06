 #define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int count = 0;

int main()
{

}
//int Fib(int n)//递归的算法有重复计算（2的n次方）。效率差。
//{
//	//if (n == 3)//测试第三个斐波那契数的计算次数
//	//{
//	//	count++;
//	//}
//	if (n <= 2)
//		return 1;
//	else
//	{
//
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
//int Fib(int n)
//{
//	int i = 0;
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n>2)//循环解法
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//	/*if (n <= 2)
//		return 1;
//	else
//	{
//		for (i = 3; i <= n; i++)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//		}
//		return c;
//	}*/
//}
//int main()//求第n个斐波那契数。
//{	
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	//TDD-测试驱动开发
//	ret = Fib(n);
//	printf("ret=%d\n", ret);
//	//printf("count=%d", count);
//	return 0;
//}
//int Fac(int x)//函数循环求阶乘
//{	
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= x; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int Fac(int x)//递归求阶乘
//{
//	if (x > 1)
//		return x * Fac(x - 1);
//	else
//		return 1;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret=Fac(n);
//	printf("%d\n", ret);
//	return 0;
//}