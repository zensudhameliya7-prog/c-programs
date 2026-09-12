#include<stdio.h>

int table(int a)
{
    int b=1;
    for(int i=1;i<=10;i++)
    {
        b=a*i;
        printf("%d \n",b);
    }
    return 0;
}

int main()
{
    int c;
    printf("Give the number for table \n");
    scanf("%d",&c);
    table(c);
    return 0;
}