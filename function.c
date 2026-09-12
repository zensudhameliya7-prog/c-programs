#include<stdio.h>

int sum(int a, int b)
{
    return a+b;
}

int main()
{
    int a=4,b=86,c,d;
    c=sum(a,b);
    d=sum(a,b);

    printf("%d %d",d,c);

    return 0;
}