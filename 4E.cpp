#include <stdio.h>
#include <string.h>

int main(void)
{
	int i,j=0,k,n,len;
	char num[100],str[100];
	
	gets(num);
	len=strlen(num);
	
	for(i=0;i<len;i++) {
		if((num[i]>='a'&&num[i]<='z')||(num[i]>='A'&&num[i]<='Z'))  //�ж��Ƿ�ΪӢ����ĸ 
		{
			str[j]=num[i];
			j++;
		}
		//�ж��Ƿ�Ϊ���ʽ�β 
		if(((num[i-1]>='a'&&num[i-1]<='z')||(num[i-1]>='A'&&num[i-1]<='Z'))&&(num[i]<'A'||(num[i]>'Z'&&num[i]<'a')||num[i]>'z')) {
			for(k=j-1;k>=0;k--) {
				printf("%c",str[k]);
			}
			j=0;
		}
		if(num[i]<'A'||(num[i]>'Z'&&num[i]<'a')||num[i]>'z') {
			printf("%c",num[i]); //��Ϊ�����ַ���ֱ�Ӵ�ӡ 
		}
    }
		return 0;
}
