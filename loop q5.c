#include<stdio.h>
#include<conio.h>

void main()
{
	 int first;
	 int last;
	 
	 printf("enter first year value");
	 scanf("%d",&first);
	 
	 printf("enter second year value");
	 scanf("%d",&last);
	 
	 while(first<=last)
	 {
	 	 if(first%4==0)
	 	 {
	 	 	printf("%d\t",first);		  
	    }       
		first++;
    }
    
}
