#include<stdio.h>
int max(int a,int b)
{
    if(a>b)
    {
        return printf("The large number is %d",a);
    }
    else
    {
        return printf("The large number is %d",b);
    }
}

int main()
{
    int c,d;
    printf("Give the two number: ");
    scanf("%d %d",&c,&d);
    max(c,d);
    return 0;
}