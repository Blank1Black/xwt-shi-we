 #define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>

//int main()
//{	
//	int a[10] = { 0 };
//	int i = 0;
//
//	int* p = a;
//	for (i = 0; i <= 12; i++)//ָ��Խ�磻
//	{
//		*p = i;//���ָ������ú�ĵ�ַλ����һ����
//		p++;// �𣽣𣫣�����
//		*p++ = i;//��+�ڣ�
//	}
//	return 0;
//}
int main()
{	
	//����Ұָ���ʹ��
	int b = 0;
	int a = 10;
	int* pa=10;//1.��ʼ��
	int* p = NULL;//2.����ȷָ����ָʱָ��գ�NULL��,Ҳ��ʾ��ָ�븳ֵ( ���int p=0)
	//3.ע��ָ���Ƿ�Խ��(ָ��Խ������)��
	//int a = 1;	//4.ָ��ָ��ռ��ͷ�(����ʹ�ø�ָ��ʱ)������NULL 
	//int* pa = &a;
	//*pa = 10;
	//pa = NULL;
	pa = NULL;//5.ָ��ʹ��֮ǰ�����Ч��
	if (p != NULL)
	{
		*p = 20;
	}


	return 0;

}