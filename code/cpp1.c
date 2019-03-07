#include <stdio.h>

#define message_for(a , b) \
    printf(#a " and " #b ":shiwei-apical\n")

int main()
{
	message_for(shi,wei);
	return 0;
}