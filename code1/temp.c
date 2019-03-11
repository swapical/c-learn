/*#include<stdio.h>

//函数申明
void swap(int *x,int *y);

int main()
{
	//局部变量定义
	int a = 100;
	int b = 200;
	printf("交换前，a 的值：%d\n",a);
	printf("交换前，b 的值：%d\n",b);
	
	 //  &a 表示指向 a 的指针，即变量 a 的地址 
    // &b 表示指向 b 的指针，即变量 b 的地址
	
	swap(&a,&b);
	
	printf("交换后，a 的值：%d\n",a);
	printf("交换后，b 的值：%d\n",b);
	
	return 0;
}

//调换
void swap(int *x,int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}*/

/*#include <stdio.h>

enum DAY
{
	MON = 1,TUE,WED,FRI,SAT,SUN
};

int main()
{
	enum DAY day;
	day = SUN;
	printf("%d\n",day);
	return 0;
}*/

/*#include <stdio.h>

enum DAY
{
	MON = 1,TUE,WED,FRI,SAT,SUN
} day;

int main()
{
	for (day = MON;day <= SUN;day++)
	{
		printf("枚举元素：%d \n",day);
	}
}*/
	
//*#include <stdio.h>
/*#include <stdlib.h>

int main()
{
	enum color { red=1,green,blue };
	
	enum color favorite_color;
	
	/*ask user to choose color*/
/*	printf("请输入你喜欢的颜色：(1. red, 2. green, 3. blue): ");
	scanf("%d",&favorite_color);
	
	switch (favorite_color)
	{
		case red:printf("你喜欢的颜色是红色\n");break;
		case green:printf("你喜欢的颜色是绿色\n");break;
		case blue:printf("你喜欢的颜色是蓝色\n");break;
		default:printf("你不喜欢的红、绿、蓝\n");break;
	}
	
	return 0;
}*/

/*#include <stdio.h>
#include <stdlib.h>

int main()
{
	enum day
	{
        saturday,
        sunday,
        monday,
        tuesday,
        wednesday,
        thursday,
        friday		
	}workday;
	int a = 3;
	//enum day weekend;
	workday = ( enum day )a;  //类型转换； 这个赋值的意思是，将顺序号为 3 的枚举元素赋给 day，相当于workday=tue
	printf("weekend:%d\n",workday);
	
	
	//遍历枚举成员
	for (workday = saturday;workday <= friday;workday++)
		printf("枚举元素：%d\n",workday);
	return 0;
	
}*/

/*#include <stdio.h>

int main()
{
	int i,j,k;
	printf("\n");
	for (i = 1;i < 5;i++)
		for (j = 1;j < 5;j++)
			for (k = 1;k < 5;k++)
			{
				if((i!=k)&&(i!=j)&&(j!=k))
					printf("%d,%d,%d\n",j,j,k);
			}
}*/