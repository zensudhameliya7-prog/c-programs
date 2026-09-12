#include<stdio.h>
int fib(int n)
{
    int a=0,b=1,c;
    a=b;
    b=c;
    c=a+b;
    if(n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return fib(n-1) + fib(n-2);
    }
}
int main()
{
    int x;
    printf("Give the any turm of fibonaci serise");
    scanf("%d",&x);
    printf("%d",fib(x));
    return 0;
}