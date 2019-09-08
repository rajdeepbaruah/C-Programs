#include<stdio.h>
#define MAX 10

void main()
{
	int i,n,a[MAX],low,mid,high,item;
	printf("Enter the Size of array : ");
	scanf("%d",&n);
	printf("\n Enter the elements of array : ");
	low=0;high=n-1;mid=(low+high)/2;
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
	
	while(low<=high)
	{
		if(a[mid]<item)
			low=mid+1;
		else if(a[mid]==item)
		{
			printf("\n Item is found at location %d \n",mid+1);
			break;
		}
		else
			high=mid-1;
		mid=(low+high)/2;
	}
	if(low>high)
	{	
		printf("\n Item is not present in the list");
	}
}
	
