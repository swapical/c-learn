#include <stdio.h>

int main()
{
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0;i < 10;i++)
	{
		arr[i] = i;
	}
	for (i = 0;i < 10;i++)
	{
		printf("arr[%d] = %d\n",i,arr[i]);
	}
	
	printf("arr's size : %ld\n",sizeof(arr)/sizeof(arr[0]));
}