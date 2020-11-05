#include <stdio.h>

int main(void)
{
	int month, day, year, c, w;
	
	printf("Enter date (mm/dd/yy):");
	scanf("%d/%d/%d",&month,&day,&year);
	
	printf("Dated this %d",day);
	switch (day) 
	{
	  case 1: case 21: case 31:
	  	printf("st");
	  	break;
	  case 2: case 22:
	    printf("nd");
		break;
	  case 3: case 23:
	  	printf("rd");
	  	break;
	  default: printf("th");
	    break;
	}
    printf(" day of ");
    
    switch (month)
    {
      case 1: printf("January");   break;
      case 2: printf("February");  break;
      case 3: printf("March");     break;
      case 4: printf("April");     break;
      case 5: printf("May");       break;
      case 6: printf("June");      break;
      case 7: printf("July");      break;
      case 8: printf("Agust");     break;
      case 9: printf("September"); break;
      case 10: printf("October");  break;
      case 11: printf("November"); break;
      case 12: printf("December"); break;
	}
    
    printf(",20%.2d",year);
    if(month == 1 || month == 2)
    {
    	month += 12;
    	year--;
	}
	c = year / 100;
	year = year - (c*100);
	w = (c / 4) -(2*c) + (year + year / 4 ) + (13 *(month + 1)/5) + day - 1;
	while(w < 0) w += 7;
	w %= 7;
	
	if (w == 0)
	  printf(",ÐÇÆÚÈÕ");
	else 
	  printf(",ÐÇÆÚ%d",w);
	  
	return 0;   
}




















