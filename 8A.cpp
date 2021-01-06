#include <stdio.h>
#include <math.h>

int main(void)
{
	int n,i,m;
	double average;
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&m);
		if(m>=-10000&m<0)
		{
			printf("ERROR\n");
		}
		else
		{
			average=sqrt(m);
			printf("%.2f\n",average);
		}
	}
	
	return 0;
}
