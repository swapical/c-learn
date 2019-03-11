/*键入学生成绩，4*4 数据，第一列学生学号，后三列语数英成绩*/
/*通过学号查找学生成绩，查到输出，查不到打印，”你的班级没有这个学生“*/
/*#include <stdio.h>
int *messagestu();
int find_mes();
static int array[4][4];
int main()
{
	//键入学生信息
	int *mes,stu_num_f,num;
	mes = messagestu();
	printf("%d\n",array[0][3]);
	
	//查找学生信息
	//stu_num_f = find_mes(mes);
	printf("please select the stu-numbel: ");
	scanf("%d\n",&num);
	/*int i,j;
	for (i = 0;i < 4;i++)
	{
		if(mes[i][0]==num)
			printf("%d\n",mes[i][0]);
		else
			printf("num is NULL!");
		
	}*/
	//打印查找结果

/*	
	return 0;
}*/

//创建4*4数组，键入学生信息
/*int *messagestu()
{
	//static int array[4][4];
	int i,j,arr;
	for (i = 0;i < 4;i++)
	{
		for (j = 0;j < 4;j++)
		{
			scanf("%d",&arr);//键入数组，行内空格分开，回车换行
 			  array[i][j] = arr;
		}
	}
	
	return array;//返回数组指针
}*/
//查找学生信息
/*int find_mes(int *array[4][4])
{
	int i,num,find_num;
	printf("please select the stu-numbel: ");
	scanf("%d\n",&num);
	for(i = 0;i < 4;i++)
	{
		if(*array[i][0]==num)
		{
			find_num = i;  //锁定行号
	        return find_num;
		}
	}	
}*/
sd



/*

#include <stdio.h>

int main()
{
	int i,j;
	int num,searchn;//num 为输入的数字，searchn 是要查找的学号
	int student[4][4];//二维数组存放学号和成绩
	
	printf("please input the 4 student's num and score:\n");
	for (i = 0;i < 4;i++)
	{
		for (j = 0;j < 4;j++)
		{
			scanf("%d",&num);
			  student[i][j] = num;//键入后马上对应赋值
		}
	}
	
	printf("please input a numbel to search:");
	scanf("%d",&searchn);
	
	//通过for循环查找想要的学号
	for (i = 0;i < 4;i++)
	{
		for (j = 0;j < 4;j++)
		{
			if(student[i][j]==searchn)
			{
				printf("The No.%d student's score is:\n",searchn);
				searchn = i;
			}
		}
	}
	for (i = 0;i < 4;i++)
	{
		printf("%d ",student[searchn][i]);  //一行显示该学生的信息
	}
	printf("\n");
	
}*/


/*局部变量和全局变量的使用*/

/*#include <stdio.h>
//全局变量
int a = 20;
int main()
{
	//在函数中的局部变量 的声明
	int a = 10;
	int b = 20;
	int c = 0;
	int sum(int,int);
	
	printf("value of a in main() = %d\n", a);
	printf("value of b in main() = %d\n", b);
	c = sum( a, b );
	printf("value of c in main() = %d\n", c);
	
	return 0;
}

//添加两个整数的函数

int sum(int a,int b)
{
	printf("value of a in sum() = %d\n", a);
	printf("value of b in sum() = %d\n", b);
	
	return a + b;
}*/

/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 20

void InitArray(int a[],int n); //系统初始化数数组
void PrintArray(int a[],int n); //打印数组
void SortArray(int a[],int n); //冒泡排序

void main()
{
	int a[N];
	InitArray(a,N);//随机初始化
	printf("输出初始的数组:\n");
	PrintArray(a,N);//打印初始化数组
	
	SortArray(a,N);//冒泡排序
	
	printf("输出排序后的数组：\n");
	PrintArray(a,N);
}

//通过时间产生随机数组
void InitArray(int a[],int n)
{
	int i;
	srand(time(NULL));
	for (i = 0;i < n;i++)
		a[i] = rand()%1000;//随机数余100，限定数组小余100
}

//输出原始数组
void PrintArray(int a[],int n)
{
	int i;
	printf("输出数组的%d个元素：\n",n);
	for(i = 0;i < n;i++)
	{
		if(i%10==0) 
			printf("\n");//10个数换行
		printf("%5d",a[i]);
	}
	
	printf("\n");
}

//冒泡排序
void SortArray(int a[],int n)
{
	int i,j,t;
	for (j = 0;j < n-1;j++)
	{
		for (i = 0;i < n-1;i++)
		{
			if(a[i] > a[i+1])
			{
				t = a[i];
				a[i] = a[i+1];
				a[i+1] = t;
	            	
		    }
		}	
	}	
}*/
