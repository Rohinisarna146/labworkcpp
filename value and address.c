#include<stdio.h>
int main()
{
    int a;
    printf("enter a=");
    scanf("%d",&a);
    int *ptr=&a;
    printf("value of a is %d",*ptr);
    printf("address of a is %d",ptr);
    return 0;
}