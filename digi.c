#include<stdio.h>

int main()
{
    int a,b,sum=0,j;
    printf("Give the number for the sum of digit: ");
    scanf("%d",&a);
    j=a;

    while(a>0)
    {
        b=a%10;
        sum=sum+b;
        a=a/10;
    }
    printf("The sum of digit of given number %d is: %d",j,sum);
    return 0;
}