#include <stdio.h>

int main()
{
	char name[20] = { 0 };
	fgets(name,sizeof(name),stdin);/*stdin 表示键盘输入，name 表示字符数组，
	                                 sizeof表示数字大小*/
	fputs(name,stdout);  /*stdout:通过打印设备输出*/
	return 0;
}
