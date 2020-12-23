#include <stdio.h>

int main(void)
{
	int t,i,j,m,n,a[3],b=0;
	
	scanf("%d",&t);
	for(i=0;i<t;i++) {
		scanf("%d %d",&m,&n);
		for(j=m;j<=n;j++) {
			a[0]=j%10;
			a[1]=(j/10)%10;
			a[2]=j/100;
			if(j==a[0]*a[0]*a[0]+a[1]*a[1]*a[1]+a[2]*a[2]*a[2]) {
			  printf("%d ",j);
			  b++;
		    }
		}
		if(b==0) {
			printf("-1\n");
		}
	}
	return 0;
}
