#include <stdio.h>

int main()
{
	char str[100];/*定义一个char 型 str数组 大小100*/
	
	printf("Enter a value :");
	gets( str );
	
	printf("\nYou Entered:");
	puts( str );
	return 0;
}