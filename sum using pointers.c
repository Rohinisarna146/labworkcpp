#include<stdio.h>
int sum(int *ptr1,int *ptr2)
{
    return (*ptr1+*ptr2);
}
int main()
{
int a=2;
int b=3;
int *ptr1=&a;
int *ptr2=&b;
int c =sum(ptr1,ptr2);
printf("sum of a and b is %d",c);
return 0;
}
