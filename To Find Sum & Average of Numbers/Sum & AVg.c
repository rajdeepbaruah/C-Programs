#include<stdio.h>
void main()
{
    int n,i,a[n];
    float sum=0,avg;
    printf("How many nos you want to enter : ");
    scanf("%d",&n);
    printf("Enter the numbers : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
        avg=sum/n;
    }
    printf("Sum of the numbers is: %f \n",sum);
    printf("Average of the numbers is: %f \n",avg);
getch();
}
