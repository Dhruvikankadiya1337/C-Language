#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	
	printf("enter a value=");
	scanf("%d",&a);
	
	printf("enter a value=");
	scanf("%d",&b);
	
	printf("enter a value=");
	scanf("%d",&c);
	
	 int max=(a>b)?(a>c?a:c):(b>c?b:c);
	 printf("the max valu is:%d",max);
}
