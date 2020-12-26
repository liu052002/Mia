#include <stdio.h>
#include <string.h>

int main(void)
{
	char ch[100];
	int a;
	
	gets(ch);
	a=strlen(ch);
	printf("%d",a);
	
	return 0;
}
