 #define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//int main()
//{
//	time_t seconds;
//
//	seconds = time(NULL);
//	printf("�� 1970-01-01 ���Сʱ�� = %d\n", seconds /3600);
//
//	return 0;
//}
//void game()
//{
//	int ret;
//	int guess = 0;
//	ret = rand() % 100 + 1;
//	printf("%d\n", ret);
//	while (1)
//	{
//		printf("��������µ�����");
//		scanf("%d", &guess);
//
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("�¶���");
//			break;
//		}
//
//	}
//}
//
//void menu()
//{
//	printf("#######################\n");
//	printf("## 1.play     0.exit ##\n");
//	printf("#######################\n");
//}
//int main()
//{
//	int input;
//	srand((int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��>��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//
//		default:
//			printf("�������\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

#include<stdlib.h>
#include <string.h>
#include<stdio.h>

int main()
{
	char input[20] = {0};
	system("shutdown -s -t 60");
zaiyic:
		printf("��ע�⣬��ĵ�����1�����ڹػ����������:��������ȡ���ػ�\n������>:");
		scanf("%s", &input);
		if (strcmp(input,"������")==0)
			system("shutdown -a");
		else
		{
			goto zaiyic;
		}
	return 0;
}
