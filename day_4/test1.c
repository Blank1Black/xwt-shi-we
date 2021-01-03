 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
struct Man
{
	char name[10];
	int  age;
	int height;
	char sex[10];
	int id;
};

int main()
{
	struct Man zs = { "张丙", 18, 175,"男", 20200103 };
	struct Man* pd = &zs;
	printf("%d岁\n", zs.age);
	zs.age = 22;
	printf("修改后的年龄 = %d岁\n", zs.age);
	strcpy(zs.name, "李丁");
		printf("修改后的名字：%s\n", zs.name);
	//printf("%s\n", (*pd).name);
	//printf("%d\n", (*pd).id);
	//printf("%s\n", pd ->name);
	//printf("%d\n", pd->id);
	//printf(" name = %s\n age = %d\n height = %d\n sex = %s\n id = %d\n", zs.name, zs.age, zs.height, zs.sex, zs.id);
	return 0;
}

//int main()
//{
//	double d = 3.14;
//	double* dc = &d;
//	printf("%d\n", sizeof(dc));
//	return 0;
//}

//int main()
//{
//	int a = 10;//调用四个字节的空间
//		printf("%p\n", &a);//输出a的地址
//
//	int* p = &a;//将a的地址存到p中，p是一个指针变量
//		printf("%p\n", p);
//
//	*p = 30;//*解引用操作符，间接访问操作符
//		printf("*p = %d\n", *p);
//		printf("a = %d\n", a);
//
//	return 0;
//}