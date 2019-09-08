
#include<stdio.h>
#include<stdbool.h>

void main()
{
    int i,j,n,temp;
    bool flag=true;
    printf(" Enter the size of the array : ");
    scanf("%d",&n);
    int a[n];

    for(i=0;i<n;i++)
    {
        printf(" \n Enter a[%d] : ",i);
        scanf("%d",&a[i]);
    }

    printf(" \n The array is : ");
    for(i=0;i<n;i++)
    {
        printf(" %d \t ",a[i]);
    }

    for(i=0;i<n-1;i++)
    {
        flag=false;
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                flag=true;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    printf(" \n The Sorted list is : ");
    for(i=0;i<n;i++)
    {
        printf(" %d \t ",a[i]);
    }
getch();
}


