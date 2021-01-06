 #define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include "add.h"
#include<string.h>
//int main()
//{	
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
//
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}
//void print(int n)//输入1234；递归输出1 2 3 4；
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n%10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	//print(1234)
//	//print(123)  4
//	//print(12)  3 4
//	//print(1)  2 3 4
//	return 0;
//}


//my_strlen(char* str)//函数循环
//{	
//	int count = 0;
//	while (*str != '\0')
//	{	
//		count++;
//		str++;
//	 }
//	return count;
//}
int my_strlen(char* str)
{
	if (*str != '\0')
	{
		return 1 + my_strlen(str + 1);
	}
	else
		return 0;
}
int main()
{	
	char arr[] = "focus";
		//printf("%d", strlen(arr));
	int len = my_strlen(arr);
	printf("len=%d\n", len);
	return 0;
}