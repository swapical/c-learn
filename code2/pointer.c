#include <stdio.h>

/*int main()
{
	int var1;
	char var2[10];
	printf("var1 变量的地址：%p\n",&var1);
	printf("var2 变量的地址：%p\n",&var2);
	
	return 0;
}*/

/*int main()
{
	int var = 20; //实际变量的声明
	int *ip;      //指针变量的声明
	
	ip = &var;    //在指针变量中存储 var 的地址
	
	printf("Address of var var variable: %p\n",&var);
	
	//在指针变量中存储的地址
	printf("Address of var var variable: %p\n", ip);
	
	//使用指针访问值
	printf("Address of var var variable: %d\n",*ip);
	
	return 0;
	
}*/

//空指针
/*int main()
{
	int *ptr = NULL;
	printf("ptr 的地址是 %p\n",ptr);
	return 0;
}*/

//递增指针


/*const int MAX = 3;

int main()
{
	int var[] = {10,100,200};
	int i,*ptr;
	
	//指针中的数组指针
	ptr = &var[MAX-1];//指向最后一个元素的地址，为的是递减指针
	for (i = MAX;i > 0;i--)
	{
		printf("存储地址：p:var[%d] = %p\n",i,ptr);
		printf("存储地址：x：var[%d] = %x\n",i,ptr);
		printf("存储值：var[%d] = %d\n",i,*ptr);
		printf("%ld\n",(long int)(ptr));
		//移动到下一个位置
		ptr--;
	}
	return 0;
}*/

//指针的比较
/*const int MAX = 3;

int main()
{
	int var[] = {10,100,200};
	int i,*ptr;
	
	//指针中的数组指针
	//ptr = &var[MAX-1];//指向最后一个元素的地址，为的是递减指针
	ptr = var;
	i = 0;
	while ( ptr <= &var[MAX - 1]) //进行比较
	{
		printf("存储地址：p:var[%d] = %p\n",i,ptr);
		printf("存储地址：x：var[%d]= 0x%lx\n",i,ptr);
		printf("存储值：var[%d] = %d\n",i,*ptr);
		printf("%ld\n",(long int)(ptr));
		//移动到下一个位置
		ptr++;
		i++;
	}
	return 0;
}*/

//指向指针的指针
/*int main()
{
	int var;
	int *ptr;
	int **pptr;
	
	var = 3000;
	
	//获取 var 的地址
	ptr = &var;
	
	//使用 &运算符 获取ptr 的地址
    pptr = &ptr;
	
	//使用 pptr 获取值
	printf("Value of var = %d\n",var);
	printf("Value available at *ptr = %d\n",*ptr);
	printf("存储地址：ptr := %p\n",ptr); //打印ptr的地址
	
	printf("Value available at *ptr = %d\n",**pptr);
	printf("存储地址：pptr:= %p\n",pptr);//打印pptr的地址
	return 0;
}*/

//指针的传递
/*#include <time.h>

void getSeconds(unsigned long *par);

int main()
{
	unsigned long sec; //传递需要统一数据类型
	
	getSeconds(&sec);  //传过来的要是一个地址，不然报错
	
	//输出实际值
	printf("Number of sceonds: %ld\n",sec );
	
	return 0;
}

void getSeconds(unsigned long *par)
{
	//获取当前秒数
	*par = time( NULL );
	return;
}*/

//能接受指针作为参数的函数，也能接受数组作为参数
//函数声明
/*double getAverage(int *arr,int size);

int main()
{
	//带有5个元素的整形数组
	int balance[5] = {1000,2,3,17,50};
	double avg;
	
	//传递一个指向数组指针作为参数
	avg = getAverage( balance,5);
	//输出返回值
	printf("Average value is : %f\n",avg);
	
	return 0;
}

double getAverage(int *arr,int size)
{
	int i,sum = 0;
	double avg;
	
	for (i = 0;i < size; ++i)
	{
		sum += arr[i];
	}
	avg = (double)sum / size;
	
	return avg;
}*/

//关于回调函数
#include <stdlib.h>
#include <time.h>

//回调函数
/*void populate_arrat(int *array,size_t arraySize,int(*getNextValue)(void))
{
	for (size_t i=0;i < arraySize;i++)
	{
		array[i] = getNextValue()+1; //读取getNextValue的返回值
	}
	
}
//获取随机值
/*int getNextRandomValue()
{
	return rand();
}

int main()
{
	
	int myarray[10];
	populate_arrat(myarray,10,getNextRandomValue);
	for (int i = 0;i < 10;i++)
	{
		printf("%d\n",myarray[i]);
	}
	return 0;
}*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h> 
 
/* 要生成和返回随机数的函数 */
/*int * getRandom( )
{
   static int  r[10];
   int i;
 
 
   srand( (unsigned)time( NULL ) );
   for ( i = 0; i < 10; ++i)
   {
      r[i] = rand();
      printf("%d\n", r[i] );
   }
 
   return r;
}
 
/* 要调用上面定义函数的主函数 
int main ()
{
   /* 一个指向整数的指针 
   int *p;
   int i;
 
   p = getRandom();
   for ( i = 0; i < 10; i++ )
   {
       printf("*(p + [%d]) : %d\n", i, *(p + i) );
   }
 
   return 0;
}*/






