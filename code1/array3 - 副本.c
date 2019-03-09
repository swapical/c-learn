#include <stdio.h>
//一维数组的倒序输出
/*int main()
{
	int a[7] = {1,2,3,4,5,6,7};
	int i,j,k;
	i=0;
	j=6;
	while(i < j)
	{
		k = a[i];
		a[i] = a[j];
		a[j] = k;
		i++;
		j--;
	}
	for (i = 0;i < 7;i++)
	{
		printf("%d\n",a[i]);
	}
	
	return 0;
}*/

//用函数的方法求出二位数组的最大值

/*int main()
{
	int max_value(int array[3][4]);  //声明
	//int a[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
	int a[3][4] = {};
	int i,j,arr;
	for (i = 0;i < 3;i++)
	{
		for (j = 0;j < 4;j++)
		{
			scanf("%d",&arr);
			  a[i][j] = arr;
		}
	}
	printf("max value is %d\n",max_value(a));
	
	return 0;
}

int max_value(int array[3][4])
{
	int i,j,max;
	max = array[0][0];
	for (i = 0;i < 3;i++)
	{
		for (j = 0;j < 4;j++)
		{
			if (array[i][j] > max);
			    max = array[i][j];
		}
	}
	
	return max;
}
*/

/*键入二维数组读取平均值*/

/*int main()
{
	double avg(int array[3][4]); //申明函数
	int a[3][4] = {}; //定义整型二维数组
	int i,j,arr;
	for (i = 0;i < 3;i++)
	{
		for (j = 0;j < 4;j++)
		{
			scanf("%d",&arr);//键入数组，行内空格分开，回车换行
 			  a[i][j] = arr;
		}
	}
	
	printf("平均值：%f\n",avg(a));

	return 0;
}

//计算品均值的函数

double avg(int array[3][4])
{
	double avg_value;
	int sum = 0;
	int k = 0;
	int i,j;
	for (i = 0;i < 3;i++)
	{
		for (j = 0;j < 4;j++)
		{
			sum += array[i][j];
		}
	}
	k = i * j;
	avg_value = sum / k;
	
	return avg_value;
	
}
*/

/*键入学生成绩，4*4 数据，第一列学生学号，后三列语数英成绩*/
/*通过学号查找学生成绩，查到输出，查不到打印，”你的班级没有这个学生“*/

int main()
{
	//键入学生信息
	
	//查找学生信息
	
	//打印查找结果
	
	return 0;
}

//创建4*4数组，键入学生信息
int *messagestu(int array[4][4])
{
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
}