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
	struct Man zs = { "�ű�", 18, 175,"��", 20200103 };
	struct Man* pd = &zs;
	printf("%d��\n", zs.age);
	zs.age = 22;
	printf("�޸ĺ������ = %d��\n", zs.age);
	strcpy(zs.name, "�");
		printf("�޸ĺ�����֣�%s\n", zs.name);
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
//	int a = 10;//�����ĸ��ֽڵĿռ�
//		printf("%p\n", &a);//���a�ĵ�ַ
//
//	int* p = &a;//��a�ĵ�ַ�浽p�У�p��һ��ָ�����
//		printf("%p\n", p);
//
//	*p = 30;//*�����ò���������ӷ��ʲ�����
//		printf("*p = %d\n", *p);
//		printf("a = %d\n", a);
//
//	return 0;
//}