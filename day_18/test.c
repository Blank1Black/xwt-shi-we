 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{	
//	 >> :���Ʋ�������
//	һ�����������λ�������ұ߶�������߲�ԭ���š�
//						  ���߼����ƣ��ұ߶�������߲�0��
//	�ڴ����ǲ��룬��ӡ���Ƿ��롣
//	������ԭ������������ͬ��
//	����ԭ�룬���룬���롣
//	��:-1��ԭ�룺1000 0000 0000 0001
//		   ���룺1111 1111 1111 1110
//		   ���룺1111 1111 1111 1111������+1��
//	����
//	int x = 6;//0000 0000 0000 0110
//	int y = x >> 1;//0000 0000 0000 0011
//	printf("y=%d\n", y);
//	 << :���Ʋ�������
//	�ұ߶�������߲�0��
//	����
//	int x = 6;//0000 0000 0000 0110
//	int y = x << 1;//0000 0000 0000 1100
//	printf("y=%d\n", y);
//	return 0;
//}
//int main()
//{	// & :��λ�룻
//
//	//int a = 3;//011
//	//int b = 5;//101
//	//int c = 0;
//	//c = a & b;//011&101=001
//	//printf("c=%d\n", c);
//
//	// | :��λ��
//
//	//int a = 3;//011
//	//int b = 5;//101
//	//int c = 0;
//	//c = a | b;//011|101=111
//	//printf("c=%d\n", c);
//	
//	// ^:��λ���
//
//	//int a = 3;//011
//	//int b = 5;//101
//	//int c = 0;
//	//c = a ^ b;//011^101=110
//	//printf("c=%d\n", c);
//	//return 0;
//}

//int main()
//{	
//	//���ϸ�ֵ����+=��-=��*=��/=��%=��>>=��<<=��&=��|=��^= ��
//	int a = 10;
//	a = a + 2;//=>a+=2;
//	printf("%d\n", a);
//	a += 2;
//	printf("%d\n", a);
//	return 0;
//}
int main()
{
	//��Ŀ����������& * 
	int a = 10;
	int* p = &a;
	*p = 20;
	printf("%d", a);//a=20
	return 0;
}
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i < n; i++)
//	{
//
//		if (n % i == 0)
//		{
//			sum = sum + i;
//
//		}
//		
//	}
//
//	if (sum == n)
//	{
//		printf("yes,%d�������ǣ�", n);
//		for (i = 1; i < n; i++)
//		{
//			if (n % i == 0)
//			{
//				printf("%d ", i);
//			}
//		}
//		printf("\n");
//	}
//	else
//		printf("No\n");
//
//	return 0;
//}

//int main()
//{	
//	char ret = 'a';
//	printf("%d", ret);
//	return 0;
//}
