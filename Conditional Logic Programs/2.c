/*. Write a C program to read the value of an integer m and display the value of
n is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0*/

#include<stdio.h>
main()
{
	int m,n;
	
	printf("\n\n Enter a m value :");
	scanf("%d",&m);
	
	if(m>0)
	{
		printf("m=1");
	}
	else if(m==0)
	{
		printf("m=0");
	}
	else
	{
		printf("m=-1");
	}
	
	printf("\n\n display the value %d",n);
}
