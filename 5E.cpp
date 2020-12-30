#include <stdio.h>

int main(void)
{
	int a[100],b[100],c[200],lena,lenb,len,i,j,t;
	scanf("%d%d",&lena,&lenb);
	for(i=0;i<lena;i++) {
		scanf("%d",&a[i]);
		c[i]=a[i];
	}
	for(i=0;i<lenb;i++) {
		scanf("%d",&b[i]);
	}
	len=lena+lenb;
	for(i=lena,j=0;i<len;i++) {
		c[i]=b[j];
		j++;
	}
	for(i=0;i<len-1;i++) {
		for(j=0;j<len-1-i;j++) {
			if(c[j]>c[j+1]) {
				t=c[j];
				c[j]=c[j+1];
				c[j+1]=t;
			}
		}
	}
	for(i=0;i<len;i++) {
		printf("%d ",c[i]);
	}
	printf("\n");
	
	return 0;
}
