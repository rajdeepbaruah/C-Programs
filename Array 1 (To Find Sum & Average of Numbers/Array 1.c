#include<stdio.h>
#define max 10

void main()
{
    int i,n;
	
    printf(" \n Enter the size of array : ");
    scanf("%d",&n);
    float a[n],sum=0,avg=0;

    if(n<=max)
    {
        printf(" \n Enter the Elements : ");
        for(i=0;i<n;i++)
        {
            scanf("%f",&a[i]);
            sum+=a[i];
        }
        avg=sum/n;
        printf(" \n The sum of the array is : %f & the average of the array is : %f", sum,avg);
    }

    else
    {
        printf(" \n Enter size less than 10");
    }
    getch();
}
