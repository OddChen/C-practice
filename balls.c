#include "stdlib.h"
#include "stdio.h"
#include "windows.h"//调用Sleep函数
/*
一、显示静止的小球
二、通过改变坐标让小球下落
三、实现上下弹跳
四、斜着弹跳
五、控制小球的速度

补充：添加printf("\a")实现碰到边界时响铃
      思考如何添加边界，而不是一个小球在乱跳
*/

void main(){
	int i, j;
	int x = 0;
	int y = 5;
	//定义小球的下落速度以及边界
	int velocity_x = 1;
	int velocity_y = 1;

	//边界坐标用常量（或变量）控制，而不是if语句中直接写数字，方便调整
	int left = 0;
	int right = 20;
	int top = 0;
	int bottom = 10;
	
	while (1){
		x = x + velocity_x;
		y = y + velocity_y;

		system("cls");//清屏函数

		for (i = 0; i < x; i++){
			printf("\n");
		}
		for (j = 0; j < y; j++){
			printf(" ");
		}
		printf("O");//球
		printf("\n");
		Sleep(50);//等待时间（毫秒）

		//当到达边界后向相反方向弹
		if ((x == top) || (x == bottom)){
			velocity_x = -velocity_x;
			printf("\a");
		}
		if ((y == left) || (y == right)){
			velocity_y = -velocity_y;
			printf("\a");
		}
	}
	
	system("pause");
}
