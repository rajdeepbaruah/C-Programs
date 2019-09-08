#include<stdio.h>

void main()
{
    int *pa,*pb,a=20,b=30;
    pa=&a;
    pb=&b;

    printf(" \n The values of a is %d ", a );
    printf(" \n The values of b is %d ", b );

    *pa=45;
    *pb=55;

    printf(" \n The new value of a and b is %d and %d  ", a,b);
    printf(" \n The address of a is %u and b is %u ", pa,pb);
getch();
}
