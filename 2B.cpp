#include <stdio.h>
#include <string.h>

int main(void)
{   int n, i, ch;
    char str[200];
	
	scanf("%d ",&n);
	gets(str);
	ch = strlen(str) - 1; //�����ַ����ĳ��� 
	
	while(n--)
    {
    	char c = str[ch]; //���ַ��������һ��Ԫ�ظ���c
		for(i = ch;i > 0; i--)
		  str[i] = str[i-1];
		  str[0] = c;
	}
	printf("%s",str);
	return 0;
}
