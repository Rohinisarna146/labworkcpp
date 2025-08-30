#include<stdio.h>
void swap(int *a,int *b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;
printf("after swapping by reference a=%d and b=%d/n",*a,*b);
}
int main()
{
    int a=2;
    int b=7;
    printf("before swapping by reference a=%d and b=%d/n",a,b);
    swap(&a ,&b);
    return 0;
}