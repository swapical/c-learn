#include <stdio.h>
#include <string.h>
#include <strings.h>
/*int main()
{
	int arr[3][5] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			arr[i][j] = i * 5 + j + 1;
		}
	}
	
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");   //循环一次既可以换行，输出美观
	}
	return 0;	
}*/

//打印二维数组地址
/*int main()
{
	int arr[3][5] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0;i < 3; i++)
	{
		for (j = 0;j < 5; j++)
		{
			printf("&arr[%d][%d] = %p\n",i,j,&arr[j]);
		}
	}
}*/

//二维数组的指针访问
/*int main()
{
	int arr[3][5] = { 0 };
	int *p = &arr[0][0];
	int i = 0;
	int j = 0;
	
	for (i = 0; i < 15;i++)
	{
		*(p + i) = i + 1;
	}
	
	for (i = 0;i < 3; i++)
	{
		for (j = 0;j < 5; j++)
		{
			printf("arr[%d][%d] = %d\n",i,j,arr[i][j]);
		}
	}
	
	return 0;
}*/

/*int main()
{
	int arr[10] = { 0 };
	printf("%p\n",&arr[0]);
	printf("%p\n",&arr[0] + 1);
	printf("----------------\n");
	printf("%p\n",arr);
	printf("%p\n",arr + 1);
	printf("-----------------\n");
	printf("%p\n",&arr);
	printf("%p\n",&arr + 1);
	
	return 0;
}*/

//数组的运算
//a :在定义变量时表示的是一个指针类型的变量，而在代码中（执行部分）则表示取出该指针所指向内容的值。 
//*&a:通常用于函数的传值，表示传入指针本身，不作复制（后面讲这句话的意思）。
/*int main()
{
	int a[] = {1,2,3,4};
	printf("%ld\n", sizeof(a));//16
    //1.数组名单独放在sizeof内部，数组名表示整个数组，所以sizeof(数组名)计算的是是数组总大小，单位是字节
    //2.&数组名，数组名表示整个数组，所以&数组名取出的是整个数组的地址
    //3.除此之外，所有的数组名都表示首元素的地址
	printf("%ld\n", sizeof(a + 0));//8  a代表首元素地址，a+i代表第i个元素的地址,在32位平台下所有的地址的大小都是4个字节,在64位平台下所有的地址的大小都是8个字节
	printf("%ld\n", sizeof(*a));//4  是首元素地址，*a是首元素--1，int型占4个字节大小
	printf("%ld\n", sizeof(a + 1));//8   a是首元素地址，a+1是第二个元素的地址，它还是一个地址
	printf("%ld\n", sizeof(a[1]));//4     a[1]--第二个元素
	printf("%ld\n", sizeof(&a));//8     &a虽然取出的是整个数组的地址，但它还是一个地址
	printf("%ld\n", sizeof(*&a));//16     &a取出的是整个数组的地址，对它进行解引用，就是这个数组，这个数组的大小就是16
	printf("%ld\n", sizeof(&a + 1));//8  &a取出的是整个数组的地址，加1跳过了整个数组（16个字节），但它还是一个地址
	printf("%ld\n", sizeof(&a[0]));//8    &a[0]取的是第一个元素的地址
    printf("%ld\n", sizeof(&a[0] + 1));//8   &a[0] + 1取的是第二个元素的地址

	return 0;
	}*/
	
	//字符数组
	
/*int main()
{
	//字符数组
	char arr[] = {'a','b','c','d','e','f'};
	printf("%ld\n", sizeof(arr));//6 整个数组的大小
	printf("%ld\n", sizeof(arr + 0));//8首元素地址的大小
	printf("%ld\n", sizeof(*arr));//1 首元素地址解引用是首元素（a），char类型占1个字节
	printf("%ld\n", sizeof(arr[1]));//1 首元素a的大小
	printf("%ld\n", sizeof(&arr));//8数组的地址的大小
	printf("%ld\n", sizeof(&arr + 1));//8下一个数组的地址，跳过了f
	printf("%ld\n", sizeof(&arr[0] + 1));//8 第二个元素"b"的地址
	
	printf("%ld\n", strlen(arr));//随机值       strlen()求的是字符串长度，以'\0'为结束标志，这里并没有'\0'，所以会一直往后数
	printf("%ld\n", strlen(arr + 0));// 6 
	//printf("%ld\n", strlen(*arr));// 错误 trlen()接收的是一个地址，*arr是字符'a'，这里把'a'的ASCII码值（97）作为一个地址访问，这一块的地址是不能被访问的
	printf("%ld\n", (sizeof(arr[1])+sizeof(arr[0])));// 2
	printf("%ld\n", strlen(&arr));//6
	printf("%ld\n", strlen(&arr + 1));//0
	printf("%ld\n", strlen(&arr[0] + 1));//5 "b"开始往后数
	
	return 0;
	
}*/

//字符串

/*int main()
{
	char arr[] = "sbcdef";
	printf("%ld\n",sizeof(arr));// 7里边还有'\0'，只不过我们看不到而已
	printf("%ld\n",sizeof(arr + 0));//8   arr+0---首元素地址
	printf("%ld\n",sizeof(*arr));//1   对首元素地址解引用是首元素
    printf("%ld\n",sizeof(arr[1]));//
	printf("%ld\n",sizeof(&arr));//8
	printf("%ld\n",sizeof(&arr + 1));//8
	printf("%ld\n",sizeof(&arr[0] + 1));
	printf("\n");
	
	printf("%ld\n",strlen(arr));//6strlen()以'\0'为结束标志，但不算'\0'
	printf("%ld\n",strlen(arr + 0));//6
	//printf("%ld\n",strlen(*arr));//错误，穿进去的不是地址，是一个字符
	printf("%ld\n",strlen("123456"));// 这样传进的就是“12345”这个字符，没有“\0”
	printf("%ld\n",strlen(&arr + 1));//随机值
	printf("%d\n", strlen(&arr[0] + 1));//5
	
	return 0;
}*/

/*int main()
{
	char *p = "abcdef";
	printf("%ld\n",sizeof(p));// 8 p是指针变量，里边存的是a的地址
    printf("%ld\n",sizeof(p + 1));//8 "b"地址
	printf("%ld\n",sizeof(*p)); //1对a的地址解引用就是a
	printf("%ld\n",sizeof(p[0]));//1
	printf("%ld\n",sizeof(&p)); //8 &p取的是p的地址，p是一个指针，指向a的地址，但p的地址是什么并不知道
	printf("%ld\n",sizeof(&p + 1));//8
	printf("%ld\n", sizeof(&p[0] + 1));//8
	
	printf("\n");
	
	printf("%ld\n", strlen(p));//6从a开始向后数,不算“\n”	
	printf("%ld\n", strlen(p + 1));//5 "b"往后数
	//printf("%ld\n", strlen(*p));//错误 *p就是a，strlen()要的是一个地址，而不是a的ASCII码值（97）
	printf("%ld\n", strlen(&p));//随机值
	printf("%ld\n", strlen(&p[0] + 1));// 5 
	
	return 0;
	
	}*/

//二维数组的

/*int main()
{
	int a[3][4] = { {1,2,3,4} };
	printf("%ld\n",sizeof(a));//48
	printf("%ld\n",sizeof(a[0][0] + 1));//4
	//printf("%d\n", a[0][1]);//0
	printf("%p\n", a[0]+1);//0
	printf("%ld\n",sizeof(a[0]));//16
	printf("%ld\n",sizeof(a[0] + 1));//8 a[0]降级变为a[0][0]的地址，a[0]+1是a[0][1]的地址
	printf("%ld\n",sizeof(a + 1));//8 a--首元素（第一行）地址，a+1--第二行地址
	printf("%ld\n",sizeof(&a[0] + 1));//8 取第二行的地址
	printf("%ld\n",sizeof(*a));//对第一行地址解引用就是第一行元素
	printf("%ld\n", sizeof(a[3]));//16    这里有好多人会出错，认为这个数组并没有这么大，只有3行，不能访问第4行，其实这里并没有访问第4行，它只是一个类型（1行的大小）
	
	return 0;
}*/

/*int main()
{
  static int  r[10];
  int i;
 
  /* 设置种子 */
/*  srand( (unsigned)time( NULL ) );
  for ( i = 0; i < 10; ++i)
  {
     r[i] = rand();
     printf( "r[%d] = %d\n", i, r[i]);
 
  }

}*/

/*产生随机数组*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

///*要生成和返回随机数的函数*/
int *getRandom()
{
	static int r[10];
	int i;
	
	//设置种子
	srand( (unsigned)time( NULL ));
	for (i = 0; i < 10;++i)
	{
		r[i] = rand();
		printf("r[%d] = %d\n",i,r[i]);
	}
	
	return r;// 返回数组r 
}

///*调用*/

int main()
{
	//指向整数的指针
	int *p;
	int i;
	p = getRandom();  //指向r首元素地址
	for ( i = 0;i < 10; i++)
	{
		printf("*(p +%d) : %d\n",i,*(p + i));  //打印传回的数组
	}
	
	return 0;
}
	
