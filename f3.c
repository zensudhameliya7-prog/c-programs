#include<stdio.h>
int sum(int a,int b)
{
    return a+b;
}

int main()
{
    int c,d;
    printf("Give the two number for the sum: ");
    scanf("%d %d",&c,&d);
    printf("The sum of number is: %d",sum(c,d));
    return 0;
}