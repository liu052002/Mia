#include <stdio.h>

int main(void)
{
	int n,i,num,a,y;
	
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		scanf("%d",&num);
		a=num;
		y=0;
		while(a>0) {
			y = y * 10 + a % 10;
			a = a / 10;
		}
		if(y==num) {
			printf("yes\n");
		}
		else
		    printf("no\n");
	}
	return 0;
}
