#include <stdio.h>

int main(void)
{
	int n,i,j,a[30],num;
	
	scanf("%d",&n);
	num=n;
	for(i=0;i<n;i++) {
		scanf("%d",&a[i]);
		for(j=0;j<i;j++)
		{
			if(a[i]==a[j])
			{
				num--;
				break;
			}
		}
	}
	printf("%d\n",num);
	
	return 0;
}
