#include <stdio.h>
 
void quick_sort(int[],int,int);
int partition(int[],int,int);
 
void main()
{
    int n,i;
    printf(" Enter number of elements : ");
    scanf("%d",&n);
    
    int a[n];
	printf("\n Enter array elements : ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        
    printf(" \n The array is : ");
    for(i=0;i<n;i++)
    {
        printf(" %d \t ",a[i]);
    }
        
    quick_sort(a,0,n-1);
    printf("\n Array after sorting : ");
    
    for(i=0;i<n;i++)
        printf("%d \t",a[i]);
    
    getch();        
}
 
void quick_sort(int a[],int l,int u)
{
    int j;
    if(l<u)
    {
        j=partition(a,l,u);
        quick_sort(a,l,j-1);
        quick_sort(a,j+1,u);
    }
}
 
int partition(int a[],int l,int u)
{
    int v,i,j,temp;
    v=a[l];
    i=l;
    j=u+1;
    
    do
    {
        do
            i++;
            
        while(a[i]<v && i<=u);
        
        do
            j--;
        while(v<a[j]);
        
        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
	while(i<j);
    
    a[l]=a[j];
    a[j]=v;
    
    return(j);
}
