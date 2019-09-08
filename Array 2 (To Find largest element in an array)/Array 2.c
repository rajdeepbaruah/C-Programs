#include<stdio.h>

void main()
{
    int i,n;
    printf(" \n Enter the size of array : ");
    scanf("%d",&n);

    float a[n],temp;
    printf(" \n Enter the Elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
    }
    temp=a[0];
    for(i=1;i<n;i++)
    {
        if(temp<a[i])
        {
            temp=a[i];
        }
    }
    printf(" \n The largest element is : %f",temp);
getch();
}
