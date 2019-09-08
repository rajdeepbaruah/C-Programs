#include<stdio.h>
#include<stdlib.h>

#define MAX 15

void PUSH(int s[], int *top, int val)
{
    if(*top<MAX)
    {
        *top=*top+1;
        s[*top]=val;
    }
    else
    {
        printf(" \n Stack is full");
        exit(0);
    }
}

void POP(int s[], int *top, int *val)
{
    if(*top>=0)
    {
        *val=s[*top];
        *top=*top-1;
    }
    else
    {
        printf(" \n Stack is empty");
        exit(0);
    }
}

void main()
{
    int s[MAX], top=-1, n, val;

    do
    {
        do
        {
            printf(" \n The Element is : ");
            scanf("%d", &val);

            PUSH(s,&top,val);
            printf("\n Continue ? \t PRESS 1 \n Else Enter any number \t");
            scanf("%d", &n);
        }
        while(n==1);

        printf(" \n To POP   PRESS 1 ");
        scanf("%d", &n);

            while(n==1)
            {
                POP(s,&top,&val);
                printf("Value POPPED is : %d", val);
                printf("\n To POP \t Enter 1 \t Else ENTER any number");
                scanf("%d", &n);
            }
        printf(" \n To continue \t Enter 1 ");
        scanf("%d", &n);

    }
    while(n==1);
getch();
}
