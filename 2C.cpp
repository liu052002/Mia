#include <stdio.h>

int main(void)
{
	int n, num, y, i, ch, Num;
	
	scanf("%d",&n);
	
	for(i = 0; i < n; i++) {
		scanf("%d",&Num);
		num = Num;
		y = 0;
		while(num > 0)
		{
			y = y * 10 + num % 10;
			num = num/10;
		 } 
		if(y == Num)
		  printf("Yes\n");
		else
		  printf("No\n");
	}
	
	return 0;
	
}
