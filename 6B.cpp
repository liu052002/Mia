#include <stdio.h>

int main(void)
{
	int n,i;
	float a[100];
	float num,sum;
	
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		scanf("%f",&a[i]);
		sum+=a[i];
	}
	num=sum/n;
	printf("%.2f",num);
	
	return 0;
}
