#include<stdio.h>

int main()
{
    int a=0,b=1,i,c,d;
    printf("Enter number of terms from third term you want of FIBONACI SERISE \n");
    scanf("%d",&c);
    printf("%d\t%d \t",a,b);
    for(i=3;i<=c;i++)
    {
        d=a+b;
        a=b;
        b=d;
        printf("%d \t",d);
    }
    return 0;
}