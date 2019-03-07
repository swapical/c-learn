#include <stdio.h>

//#define tokenpaster(n) printf("token" #n " = %d\n",token##n)
#define tokenpaster(n) printf("token" #n " = %s\n",token##n)
/*int main(void)
{
	int token34 = 50;
	
	tokenpaster(34);  //just like :printf ("token34 = %d",token34);
	return 0;
}*/
#define token34 "shwiei-apical"
int main(void)
{
	tokenpaster(34);  //just like :printf ("token34 = %s\n",token34);
	return 0;
}