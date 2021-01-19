 #define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>

//int main()
//{	
//	int a[10] = { 0 };
//	int i = 0;
//
//	int* p = a;
//	for (i = 0; i <= 12; i++)//指针越界；
//	{
//		*p = i;//令ｐ指针解引用后的地址位数加一；①
//		p++;// ｐ＝ｐ＋１；②
//		*p++ = i;//①+②；
//	}
//	return 0;
//}
int main()
{	
	//避免野指针的使用
	int b = 0;
	int a = 10;
	int* pa=10;//1.初始化
	int* p = NULL;//2.不明确指针所指时指向空（NULL）,也表示给指针赋值( 类比int p=0)
	//3.注意指针是否越界(指针越界如上)；
	//int a = 1;	//4.指针指向空间释放(即不使用该指针时)可以置NULL 
	//int* pa = &a;
	//*pa = 10;
	//pa = NULL;
	pa = NULL;//5.指针使用之前检查有效性
	if (p != NULL)
	{
		*p = 20;
	}


	return 0;

}