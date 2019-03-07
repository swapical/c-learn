#include <stdio.h>

int max(int a,int b);  /*函数说明*/

void main()
{
    int x,y,z;        /*变量说明*/
//	int max(int a,int b);
	printf("input two number:\n");
	scanf("%d%d",&x,&y); /*输入x,y的值*/
	z=max(x,y);
	printf("maxmum=%d \n",z);
}

int max(int a,int b)
{
	if(a>b) return a;
	else return b;     /*结果返回主调函数*/
}
