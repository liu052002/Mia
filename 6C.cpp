#include <stdio.h>
#include <string.h>

int main()
{
	int n,i,j,count;
	char a[100][30];
	double sum;
	
	scanf("%d",&n);
	if(n>=1&&n<=100)
	{
    	for(i=0;i<n;i++)
    	{
    		scanf("%s",a[i]);
    	}
    	count=n;
    	for(i=0;i<n;i++)
    	{
	    	if(strcmp(a[i],"n/a")==0) count--;
    	}
    	if(count==0) printf("n/a");
	    else
	    {
		    int b[100]={0};
	    	for(i=0;i<n;i++)
	        {
	        	if(strcmp(a[i],"n/a")==0) continue;
	        	else if(a[i][0]=='-')
	        	{
	        		for(j=1;j<strlen(a[i]);j++)
	        		    b[i]=b[i]*10+a[i][j]-'0';
	        		b[i]=-b[i];
	        	}
	        	else
	        	{
	        		for(int j=0;j<strlen(a[i]);j++)
	        		    b[i]=b[i]*10+a[i][j]-'0';
	        	}
    	    }
        	sum=0;
        	for(i=0;i<n;i++)
        	{
    	    	sum=sum+b[i];
        	}
          	printf("%.2lf",sum/count);
	     }
    }
	return 0;
}

