 #define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int count = 0;

int main()
{

}
//int Fib(int n)//�ݹ���㷨���ظ����㣨2��n�η�����Ч�ʲ
//{
//	//if (n == 3)//���Ե�����쳲��������ļ������
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
//	while (n>2)//ѭ���ⷨ
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
//int main()//���n��쳲���������
//{	
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	//TDD-������������
//	ret = Fib(n);
//	printf("ret=%d\n", ret);
//	//printf("count=%d", count);
//	return 0;
//}
//int Fac(int x)//����ѭ����׳�
//{	
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= x; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int Fac(int x)//�ݹ���׳�
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