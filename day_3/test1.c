 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char ch = 'w';
	char* pc = &ch;
	printf("%d\n", sizeof(pc));
		printf("%p\n", &ch);
		printf("%p\n", pc);
		printf("%c\n", *pc);
		*pc = 'W';
		printf("%c\n", *pc);
}
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	printf("%d\n", *p);
//	*p = 20;
//	printf("%d\n", *p);
//
//	return 0;
//}
//Max(int x,int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//#define MAX(s,h) (s>h?s:h)
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = Max(a, b);
//	printf("max=%d\n", max);
//	max = MAX(a, b);
//	printf("max=%d\n", max);
//
//	return 0;
//}

//extern int ADD(int, int);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = ADD(a,b);
//
//	printf("sum=%d\n", sum);
//
//	return 0;
//}

//int main()
//{
//	extern int c_ad;
//	printf("c_ad=%d", c_ad);
//
//	return 0;
//}
//
//void test()
//{
//	static int a = 1;
//
//	a++;
//	printf("a = %d\n", a);
//
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}