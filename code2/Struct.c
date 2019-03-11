#include <stdio.h>

/*struct Books
{
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
}book = {"C 语言","RUNoob","编程语言",123456};

int main()
{
	printf(" title:%s\n author:%s\n subject: %s\n book_id : %d\n",
	       book.title,book.author,book.subject,book.book_id);
	return 0;
}*/

/*#include <string.h>
struct books
{
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
};

int main()
{
	struct books book1;//声明book1，类型为books
	struct books book2;//声明book2，类型为books
	
	//book1
	strcpy( book1.title,"C Programming");
	stpcpy( book1.author,"Nuha Ali");
	strcpy( book1.subject,"C Programming Tutorial");
	book1.book_id = 789456;
	
	//book2
	strcpy( book2.title,"Telecom Billing");
	stpcpy( book2.author,"Zara Ali");
	strcpy( book2.subject,"Telecom Billing Tutorial");
	book2.book_id = 123465;
	
	//输出
   printf( " book1 title : %s\n",  book1.title);
   printf( " book1 author : %s\n",  book1.author);
   printf( " book1 subject : %s\n",  book1.subject);
   printf( " book1 book_id : %d\n",  book1.book_id);	
   
   printf( " book2 title : %s\n",  book2.title);
   printf( " book2 author : %s\n",  book2.author);
   printf( " book2 subject : %s\n",  book2.subject);
   printf( " book2 book_id : %d\n",  book2.book_id);	
   
   return 0;
}*/

/*#include <string.h>
struct books
{
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
};
void printfbook( struct books book );
int main()
{
	struct books book1;//声明book1，类型为books
	struct books book2;//声明book2，类型为books
	
	//book1
	strcpy( book1.title,"C Programming");
	stpcpy( book1.author,"Nuha Ali");
	strcpy( book1.subject,"C Programming Tutorial");
	book1.book_id = 789456;
	
	//book2
	strcpy( book2.title,"Telecom Billing");
	stpcpy( book2.author,"Zara Ali");
	strcpy( book2.subject,"Telecom Billing Tutorial");
	book2.book_id = 123465;
	
	//输出
	printfbook( book1 );
	printf("\n");
	printfbook( book2 );
   
    return 0;
}

void printfbook(struct books book)
{
   printf( "Book title : %s\n", book.title);
   printf( "Book author : %s\n", book.author);
   printf( "Book subject : %s\n", book.subject);
   printf( "Book book_id : %d\n", book.book_id);	
}*/

/*#include <string.h>
struct books
{
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
};
void printfbook( struct books *book );
int main()
{
	struct books book1;//声明book1，类型为books
	struct books book2;//声明book2，类型为books
	
	//book1
	strcpy( book1.title,"C Programming");
	stpcpy( book1.author,"Nuha Ali");
	strcpy( book1.subject,"C Programming Tutorial");
	book1.book_id = 789456;
	
	//book2
	strcpy( book2.title,"Telecom Billing");
	stpcpy( book2.author,"Zara Ali");
	strcpy( book2.subject,"Telecom Billing Tutorial");
	book2.book_id = 123465;
	
	//输出
	printfbook( &book1 );
	printf("\n");
	printf("&book.title : %p\n",&(book1.title));
	printf("&book.author : %p\n",&(book1.author));
	printf("&book1.subject : %p\n",&(book1.subject));
	printf("&book1.book_id : %p\n",&(book1.book_id));
	//printfbook( &book2 );
   
    return 0;
}

void printfbook(struct books *book)
{
   printf( "Book title : %s\n", book->title);
   printf( "Book author : %s\n", book->author);
   printf( "Book subject : %s\n", book->subject);
   printf( "Book book_id : %d\n", book->book_id);	
}

/*int main()
{
	struct bs
	{
	    unsigned a:1;
        unsigned b:3;
		unsigned c:4;
	}bit,*pbit;
	bit.a = 1;  //给位域赋值（应注意赋值不能超过该位域的允许范围）
	bit.b = 7;
	bit.c = 15;
	printf("%d,%d,%d\n",bit.a,bit.b,bit.c);
	
	pbit = &bit; // 把位域变量 bit 的地址送给指针变量 pbit 
	pbit->a = 0; // 用指针方式给位域 a 重新赋值，赋为 0
	pbit->b&=3;   //复合的位运算符 "&="
	
	pbit->c|=1;
	printf("%d,%d,%d\n",pbit->a,pbit->b,pbit->c);
	
	printf("&bit: %p\n",&bit);
	printf("&pbit: %p\n",(void *)pbit);

}*/

/*#include <string.h>

union Data
{
	int i;
	float f;
	char str[20];
};

int main()
{
	union Data data;
	printf("Memory size cccupied by data :%ld\n",sizeof(data));
	
	data.i = 10;
	data.f = 220.5;
	strcpy( data.str,"C Programming");
	printf("data.i : %d\n",data.i);
	printf("data.f : %f\n",data.f );
	printf("data.str :%s\n",data.str);//我们可以看到共用体的 i 和 f 成员的值有损坏，因为最后赋给变量的值占用了内存位置，这也是 str 成员能够完好输出的原因
	
	return 0;
}*/

/*#include <string.h>

union Data
{
	int i;
	float f;
	char str[20];
};

int main()
{
	union Data data;
	printf("Memory size cccupied by data :%ld\n",sizeof(data));
	
	data.i = 10;
	printf("data.i : %d\n",data.i);
	
	data.f = 220.5;
	printf("data.f : %f\n",data.f );
	
	strcpy( data.str,"C Programming");
	printf("data.str :%s\n",data.str);//我们可以看到共用体的 i 和 f 成员的值有损坏，因为最后赋给变量的值占用了内存位置，这也是 str 成员能够完好输出的原因
	
	return 0;
}*/

int main()
{
	int sum = 17,count = 5;
	double mean;
	mean = sum / (double) count;
	printf("Value of mean : %f\n",mean );
}

