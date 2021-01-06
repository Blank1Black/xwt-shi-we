 #define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//int main()
//{
//	time_t seconds;
//
//	seconds = time(NULL);
//	printf("自 1970-01-01 起的小时数 = %d\n", seconds /3600);
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
//		printf("请输入你猜的数：");
//		scanf("%d", &guess);
//
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("猜对了");
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
//		printf("请选择>：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//
//		case 0:
//			printf("退出游戏\n");
//			break;
//
//		default:
//			printf("输入错误\n");
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
		printf("请注意，你的电脑在1分钟内关机，如果输入:我是猪，就取消关机\n请输入>:");
		scanf("%s", &input);
		if (strcmp(input,"我是猪")==0)
			system("shutdown -a");
		else
		{
			goto zaiyic;
		}
	return 0;
}
