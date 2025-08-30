#include<stdio.h>
void increment (int *p)
{
    (*p)++;
}
int main()
{
    int a=6;
    printf("value of a=%d",a);
    increment (&a);
    printf("after inc. value of a=%d",a);
    return 0;
}