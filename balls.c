一、显示静止的小球
/*
 *当前小球用O表示
 *有图片素材后可以试着替换（大概）
 *
 */
 
// 在坐标(x,y)处输出一个小球
#include <stdio.h>
void main()
{
	int i,j;
	int x = 5;
	int y = 10;	
	// 输出小球上面的空行
	for(i=0;i<x;i++)
		printf("\n");
	// 输出小球左边的空格
	for (j=0;j<y;j++)
		printf(" ");
	printf("o");  // 输出小球o
	printf("\n"); 	
}
