#include<stdio.h>
#define MAX 10

void main()
{
	int i,n,a[MAX],loc=0,item;
	printf("Enter the Size of array : ");
	scanf("%d",&n);
	printf("\n Enter the elements of array : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);		
	}
	printf("The input list is : ");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=%d\t",i,a[i]);
	}
	printf("\n Enter the item to search : ");
	scanf("%d",&item);
	
	while(loc!=n)
	{
		if(a[loc]==item)
		{
			printf("\n Item is found at location %d",loc);
			exit(0);
		}
		else
		{
			loc=loc+1;
		}
		
	}	
	if(loc==n)
	{
		printf("\n The Item is not present in the list");
	}
getch();
}

