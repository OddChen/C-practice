#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>//可以从键盘获取输入
#pragma warning(disable:4996)
/*
 *可改进方向：实现移动的敌机，我们的飞机发射子弹击中他
 *显示得分 敌机撞击我们后，判断并提示游戏失败
 *
 */
int main(){
	int i, j;
	int x = 5;
	int y = 10;
	char input;
	int isFire = 0;

	int isKilled = 0;
	int score=0;
	//关于敌机的一些定义
	int dx = 5;
	int dy = 10;
	int velocity_dx = 1;
	int velocity_dy = 1;
	int left = 0;
	int right = 100;
	int top = 0;
	int bottom = 30;
	
	while (1){
		system("cls");//清屏
		//分数统计
		printf("当前分数：%d\n", score);
		
		//运动的飞机
		if (!isKilled){
			//dx = dx + velocity_dx;
			//dy = dy + velocity_dy;

			for (i = 0; i<dx; i++)
				printf("\n");
			for (j = 0; j<dy; j++)
				printf(" ");

			printf("*\n");  // 敌机
			//Sleep(50);  // 等待若干毫秒

			//if ((dx == top) || (dx == bottom))
			//	velocity_dx = -velocity_dx;
			//if ((dy == left) || (dy == right))
			//	velocity_dy = -velocity_dy;		
		}

		//判断是否发射激光并输出
		if (isFire == 0){
			for (i = 0; i < x; i++){
				printf("\n");
			}
		}
		else{
			for (i = 0; i < x; i++){
				for (j = 0; j < y; j++){
					printf(" ");
				}
				printf("  |\n");
			}
			if (y + 2 == dy){
				isKilled = 1;
			}
			isFire = 0;
		}
		
		//飞机图案
		for (j = 0; j < y; j++){
			printf(" ");
		}
		printf("  *\n");
		for (j = 0; j < y; j++){
			printf(" ");
		}
		printf("*****\n");
		for (j = 0; j < y; j++){
			printf(" ");
		}
		printf(" * *\n");


		if (kbhit()){//判断是否有输入
			input = getch();
			if (input == 'w')
				x--;
			if (input == 'a')
				y--;
			if (input == 's')
				x++;
			if (input == 'd')
				y++;
			if (input == ' ')
				isFire = 1;
		}
	}
}
