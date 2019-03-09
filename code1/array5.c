#include <stdio.h>

/*int main()
{
	char arr[10] = {0};
	int i = 0;
	for (i = 0;i < sizeof(arr)/sizeof(arr[0]);i++)
	{
		printf("&arr[%d] = %p\n",i,&arr[i]);//%p用来打印指针地址
	}
	
	return 0;
}*/

/*int main()
{
	int arr[10] = {0,1,2,3,4,5,6,7,8,9};
	printf("%p\n",arr);
	printf("%d\n",*arr[1]);
	return 0;
}*/

int main()
{
	int arr[10] = { 0 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int *p = arr;
	for (i = 0;i < sz; i++)
	{
		arr[i] = i;(1);
		//*(p + i) = i;(2);
	}
	for (i = 0;i < sz; i++)
	{
		printf("%d\n",arr[i]);//(1),(2)的输出一样
	}
	return 0 ;
}
