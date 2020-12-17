#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int m,a,i,max=0,j;
	
	scanf("%d",&m);
	for(i = 0;i < m;i++){
		scanf("%d",&a);
		if(max < abs(a)){
		  max=abs(a);
		  j=a;}
	}
    
	printf("%d",j);
	return 0;
}
