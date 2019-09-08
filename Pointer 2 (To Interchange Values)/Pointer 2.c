#include<stdio.h>

void main()
{
    int a=20,b=30,*pa,*pb;
    pa=&a,pb=&b;
    printf(" \n a=%d & b=%d",a,b);
    *pa=*pb;
    printf(" \n a=%d & b=%d",a,b);
    *pa=*pb;
    printf(" \n a=%d & b=%d",a,b);
getch();

}
