#include <stdio.h>

int main(void)
{
	int m,n,i,j,x,y,t,min1,min2,a[100];
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&m);
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[j]);
		}
		//Ã°ÅÝÅÅÐò 
		for(x=0;x<m-1;x++)
		{
			for(y=0;y<m-1-x;y++)
			{
				if(a[y]<a[y+1])
				{
					t=a[y+1];
					a[y+1]=a[y];
					a[y]=t;
				}
			}
		}
		
		min1=a[m-1];
		min2=a[0];
		for(x=m-2;x>=0;x--)
		{
			if(a[x]<min2&&a[x]!=min1)
			{
				min2=a[x];
			}
		}
		printf("%d\n",min2);
		if(min1<min2)
		{
			printf("%d\n",min2);
		}
		else if(m==1)
		{
			printf("ERROR\n");
		}
		else
		{
			printf("ERROR\n");
		}
	}
	return 0;
}
