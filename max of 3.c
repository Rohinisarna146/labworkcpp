#include<stdio.h>
int max(int *a,int *b,int *c)
{
    if (*a>*b && *a>*c)
    return *a;
    else if (*b>*a && *b>*c)
    return *b;
    else
    return *c;
}
int main()
{
int a=5;
int b=8;
int c=10;
int d;
d=max(&a,&b,&c);
printf ("greatest one is %d",d);
return 0;
}