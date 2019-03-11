//输出字符串
#include <stdio.h>
/*
int main()
{
	char greeting[]="Hello!";
	printf("greeting message : %s\n",greeting); //%s用来输出字符串
	
	return 0;
}*/

#include <string.h>

int main()
{
	char str1[30] ;
    char str2[30] ="123456";
    char str3[30];
	int len;  //长度
	printf("please input string for str1 :\n");
	//scanf("%c",&str1);
	gets(str1);
	
	//复制 str1 到 str3 
	strcpy(str3,str1);
	printf("strcay( str3,str1 ) :%s\n",str3);
	//连接 str1 和 str2
	strcat(str1,str2);
	printf("strcat( str1,str2 ) :%s\n",str1);
	//连接后，str1 的总产长度
	len = strlen(str1);
	printf("strlen(str1) : %d\n",len);
	return 0;
}