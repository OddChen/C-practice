#include<stdio.h>
#include<stdlib.h>
#include<conio.h>//可以从键盘获取输入
#pragma warning(disable:4996)
/*
 *可改进方向：实习移动的敌机，我们的飞机发射子弹击中他
 *显示得分 敌机撞击我们后，判断并提示游戏失败
 *
 */
int main(){
	int i, j;
	int x = 5;
	int y = 10;
	char input;
	int isFire = 0;

	int ny = 5;//靶子，放在第一行，ny列
	int isKilled = 0;

	while (1){
		system("cls");//清屏

		//输出靶子
		if (!isKilled){
			for (j = 0; j < ny; j++){
				printf(" ");
			}
			printf("+\n");		
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
			if (y + 2 == ny){
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
