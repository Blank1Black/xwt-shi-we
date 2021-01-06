 #define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void game()
{	
	// 布置雷的信息。
	char mine[ROWS][COLS] = { 0 };
	//排查雷的信息。
	char show[ROWS][COLS] = { 0 };
	//初始化布局。
	Initboard(mine, ROWS, COLS,'0');
	//用于隐藏布置雷的信息。（展示给用户）
	Initboard(show, ROWS, COLS,'*');
	//打印布局。
	//Displayboard(mine, ROW, COL);
	Displayboard(show, ROW, COL);
	//布置雷。
	SetMine(mine, ROW, COL);
	Displayboard(mine, ROW, COL);
	//排雷。
	FindMine(mine,show,ROW,COL);
	
	
}
void menu()
{
	printf("***********************************\n");
	printf("*************  1.play  ************\n");
	printf("*************  0.exit  ************\n");
	printf("***********************************\n");
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏。\n");
			break;
		default:
			printf("输入错误，请重新输入。\n");
		}

	} while (input);
}
	
int main()

{
	test();

	return 0;
}