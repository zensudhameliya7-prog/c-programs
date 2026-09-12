#include<stdio.h>
int cube(long int x)
{
    return x*x*x;
}

int main()
{
    long int a;
    printf("Give the number for cube: ");
    scanf("%ld",&a);
    printf("The cube of given number %ld is: %d",a,cube(a));
    return 0;
}