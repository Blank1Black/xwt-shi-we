 #define _CRT_SECURE_NO_WARNINGS 1
//��������Ϸ����
#include "game.h"
void game()
{	
	char ret = 0;
	char board[ROW][COL] = { 0 };//ȫ���ո�
	//��ʼ������
	InitBoard(board , ROW, COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		PlayerMove (board, ROW, COL);//����ƶ�
		DisplayBoard (board, ROW, COL);
		ret=IsWin(board, ROW, COL);//�ж����Ӯ
		if (ret != 'C')
		{
			break;
		}
		ComputeMove(board, ROW, COL);
		DisplayBoard (board, ROW, COL);
		ret=IsWin(board, ROW, COL);//�жϵ���Ӯ
		if (ret != 'C')
		{
			break;
		}

	}
	if (ret == 'O')
	{
		printf("���Ӯ\n");
	}
	else if (ret == 'X')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
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
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("������\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������,������ѡ��\n");
			break;
		}
	} while (input);
}
int main()
{	
	
	test();
	return 0;
}