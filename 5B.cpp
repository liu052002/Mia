#include <stdio.h>

int num(int j)
{
	int i;
	for(i=2;i<j;i++) {
		if(j%i==0)
		  return 0;
	}
	return 1;
}

int main(void)
{
	int n,x,i,j=2,m;
	
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		scanf("%d",&x);
		for(j=2;x>=j;) {
			if(x%j==0&&num(j))
			{
				if(j==x) {
					printf("%d",j);
				}
				else{
				  printf("%d*",j);
			    }
				x/=j;
			}
			else
			{
				j++;
			}
		}
		printf("\n");
	}
	return 0;
}
