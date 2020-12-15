#include <stdio.h>
#include <string.h>

int main(void)
{   int n, i, ch;
    char str[200];
	
	scanf("%d ",&n);
	gets(str);
	ch = strlen(str) - 1; //计算字符串的长度 
	
	while(n--)
    {
    	char c = str[ch]; //把字符串的最后一个元素赋给c
		for(i = ch;i > 0; i--)
		  str[i] = str[i-1];
		  str[0] = c;
	}
	printf("%s",str);
	return 0;
}
