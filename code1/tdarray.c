#include <stdio.h>

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
int main()
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
	}