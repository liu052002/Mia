#include <stdio.h>

int main(void)
{
	int a, b, c; 
	int i, n;
	
	scanf("%d",&n);
	for(i = 0;i < n;i++) {
		scanf("%d %d %d",&a,&b,&c);
		
		if((a+b>c) && (a+c>b) && (b+c>a) && a>0 && b>0 && c>0)
		{
		  if((a*a)+(b*b)==(c*c)|| (a*a)+(c*c)==(b*b)|| (b*b)+(c*c)==(a*a))
		    printf("Yes\n");
		  else
		    printf("No\n");
	}
		else
		  printf("No\n");
	}
	return 0;
 } 
