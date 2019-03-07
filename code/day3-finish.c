/****项目名称 ：关于3月6日 学习知识综合编程         */
/****知识点：预处理的使用，格式哈输出，流程结构     */

/****1. 使用条件循环语句，循环输入，判断菜单        */
/****2. 菜单选项通过键入完成，键入后执行相关功能    */
/****3. 键入结束                                    */


#include <stdio.h>
#define doc  "shiwei-apical"

#define score(n) printf(#n " very happy to meet you.\n")    /*字符串常量化运算符（#）*/
#define token(n) printf("the shiwei's grade is : %d\n",grade##n)/*标记粘贴运算符（##）*/

void current_version(); /*打印版本相关信息*/
void meun();
void lead();
static int number;

void main()
{
	int grade52 = 59;
    meun();
	scanf("%d",&number);
	
	/*循环输入*/
	while(number!=5)
	{
		switch(number)
		{
			case(1):current_version();lead();break;/*打印版本相关信息*/
			case(2):printf("The teacher is :apical-lidan\n");lead();break;/*打印主管姓名*/
			case(3):score(shiwei);lead();break;/*通过预处理宏定义打印*/
			case(4):token(52);lead();break;
		}
		scanf("%d",&number);

	}
	if(number==5)
	{
		printf("good bye\n");/*打印 “good bye”*/
	}
	
	
}

/*打印当前版本相关信息*/
void current_version()
{
    printf("File :%s\n", __FILE__ );
    printf("Date :%s\n", __DATE__ );
    printf("Time :%s\n", __TIME__ );
    printf("Line :%d\n", __LINE__ );
    printf("ANSI :%d\n", __STDC__ );
    printf("name :%s\n", doc);    
} 

/*打印菜单*/
void meun()
{
	printf("------------------------------------------------------------\n");
	printf("--Select the function you want to use from the menu below!  |\n");
	printf("--1.file-message  2.see the teachaer                        |\n");
	printf("--3.see the cpp   4.see th cpp2                             |\n");
	printf("--5.exit                                                    |\n");
	printf("------------------------------------------------------------\n");
	printf("--I want to :");
   	
}

/*引导语*/
void lead()
{
	printf("-----------------------------------------------------------\n");
	printf("what do you wang to do now ?\n");
	meun();
}