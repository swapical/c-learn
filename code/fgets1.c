#include <stdio.h>

int main()
{
	char name[20] = { 0 };
	fgets(name,sizeof(name),stdin);
	printf("%s\n",name);/*输出不需要"\n",实际fgets会认为用户
	                    输入的回车是字符串的一部分*/
	return 0;
}