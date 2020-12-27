#include <stdio.h>

int main(void)
{
	int n,i,j,m,x,num[100],a[100],b[100];
	int len,lena,lenb,t;
	
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		for(j=0;;j++) {
		  scanf("%d",&num[j]);
		  len++;
      	  if(getchar()=='\n')
      	  break;
	  }
	  //printf("%d\n",len);
	    for(j=0,m=0,x=0;j<len;j++) {
	    	if(num[j]%2==0) {  //为偶数时 
	    		a[m]=num[j];
				m++; 
				lena=m;
			}
			if(num[j]%2 != 0) {  //为奇数时 
			    b[x]=num[j];
				x++; 
				lenb=x;
			}
		}
		
		/*printf("%d ",lena);
		printf("%d\n",lenb); */
		//冒泡排序 
		for(m=0;m<lena-1;m++) {
			for(j=0;j<lena-1-m;j++) {
				if(a[j]>a[j+1]) {
					t=a[j];
					a[j]=a[j+1];
					a[j+1]=t;
			}
	    }
	}
		for(x=0;x<lenb-1;x++) {
			for(j=0;j<lenb-1-x;j++) {
				if(b[j]>b[j+1]) {
					t=b[j];
					b[j]=b[j+1];
					b[j+1]=t;
				}
			}
		}
		for(x=0;x<lenb;x++) {
			printf("%d ",b[x]);
		}
		for(m=0;m<lena;m++) {
			printf("%d ",a[m]);
		}
        printf("\n");
        len=0;
        lena=0;
        lenb=0;
}
	return 0;
}
