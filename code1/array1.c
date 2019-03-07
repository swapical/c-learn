#include <stdio.h>

int main ()
{
	/*一个带有5行2列的数组*/
	int a[5][3] = {{1,2,3},
				  {4,5,6},
				  {7,8,9},
				  {10,11,12},
				  {13,14,15}};
    int i,j;
	
	/* 输出数组中每隔元素的值 */
	for ( i = 0; i < 5; i++ )
	{
		for ( j = 0; j < 3; j++)
		{
			printf("a[%d][%d] = %d\n", i, j, a[i][j]);
		}
	}
	return 0;
}