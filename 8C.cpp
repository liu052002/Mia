#include <stdio.h>

int sum(int j)
{ //ÅĞ¶ÏÖÊÊı 
	int i;
	for(i=2;i<j;i++)
	{
		if(j%i==0)
		{
			return 0;
		}
	}
	return 1;
	
}

int main(void)
{
	int n,i,j,ch,num;
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&num);
		for(j=2;j<=num;)
		{
			if(num%j==0&&sum(j))
			{
				if(j==num)
				{
					printf("%d\n",j);
				}
		        else
		        {
		        	printf("%d*",j);
				}
				num/=j;
			}
			else 
			{
				j++;
			}
		
		}
	}
	return 0;
 } 
