#include<stdio.h>

void main()
{
    int i,n,*pa;

    printf(" \n Enter the size of array : ");
    scanf("%d",&n);

    float a[n];

    printf(" \n Enter the Elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        pa=&a[i];
        printf(" \n Address of a[%d] is : %u ",i,pa);

    }
getch();
}
