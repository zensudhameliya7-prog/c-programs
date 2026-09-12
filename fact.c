#include<stdio.h>

int main()
{
    int a,b,i,multi;
    printf("Enter the number whose factoriel you want");
    scanf("%d",&a);

    for(i=1;i<=a;i++)
    {
        multi=multi*i;
    }
    printf("Your factorial of number %d is %d",a,multi);
}