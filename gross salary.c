#include<stdio.h>
#include<conio.h>

void main()
{
	int salary=100, hra=10, da=5, ta=8;
	int grosssalary;
	
	printf("enter base salary\n");	
	
	printf("enter hra percentage\n");	
	
	printf("enter da percentage\n");	
	
	printf("enter ta percentage\n");
	
	hra=(hra*salary)/100;
	da=(da*salary)/100;
	ta=(ta*salary)/100;
	
	
	grosssalary= salary+hra+da+ta;
	
	printf("grosssalary :%d\n",grosssalary);
	
	
	
	
	
	
}
