 #define _CRT_SECURE_NO_WARNINGS 1
//三子棋游戏测试
#include "game.h"
void game()
{	
	char ret = 0;
	char board[ROW][COL] = { 0 };//全部空格
	//初始化棋盘
	InitBoard(board , ROW, COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		PlayerMove (board, ROW, COL);//玩家移动
		DisplayBoard (board, ROW, COL);
		ret=IsWin(board, ROW, COL);//判断玩家赢
		if (ret != 'C')
		{
			break;
		}
		ComputeMove(board, ROW, COL);
		DisplayBoard (board, ROW, COL);
		ret=IsWin(board, ROW, COL);//判断电脑赢
		if (ret != 'C')
		{
			break;
		}

	}
	if (ret == 'O')
	{
		printf("玩家赢\n");
	}
	else if (ret == 'X')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
}
void menu()
{
	printf("*****************************\n");
	printf("*****1.PLAY     0.EXIT  *****\n");
	printf("*****************************\n");
}
void test()
{	
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("三子棋\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误,请重新选择\n");
			break;
		}
	} while (input);
}
int main()
{	
	
	test();
	return 0;
}