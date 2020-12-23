#include <stdio.h>

int main(void)
{
	int n,i;
	
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		int a,b,c,d;
		scanf("%d %d %d %d",&a,&b,&c,&d);
		int t;
		
		if(b<a) {
			t=a;
			a=b;
			b=t;
		}
		if(c<a) {
			t=a;
			a=c;
			c=t;
		}
		if(d<a) {
			t=a;
			a=d;
			d=t;
		}
		if(c<b) {
			t=b;
			b=c;
			c=t;
		}
		if(d<b) {
			t=b;
			b=d;
			d=t;
		}
		if(d<c) {
			t=c;
			c=d;
			d=t;
		}
		printf("%d %d %d %d\n",a,b,c,d);
	}
	return 0;
 } 
