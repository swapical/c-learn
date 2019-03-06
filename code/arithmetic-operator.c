#include <stdio.h>

int main()
{
	int a = 21;
	int b = 10;
	int c ;
	c = a + b;
	printf("Line 1 - c 的值是 %d\n", c );
	c = a++;
	printf("Line 2 - c 的值是 %d\n", c );
	c = --a;
	printf("Line 3 - c 的值是 %d\n", c );
	
}
