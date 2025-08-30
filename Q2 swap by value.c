#include<stdio.h>
void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("after swapping by call by value a=%d and b=%d",a,b);
}
    int main()
    {
    int a=3;
    int b=10;
    printf("before swapping by call by value a=%d and b=%d",a,b);
    swap(a,b);
    return 0;
    }