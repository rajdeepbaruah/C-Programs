#include<stdio.h>
void main()
{
    int i,n=1;
    printf("The first 10 odd decimal numbers are :");
    for(i=0;i<10;i++)
    {
        if(n%2!=0)
        {
            printf("%d \t",n);
            n+=2;
        }
    }
    getch();
}
