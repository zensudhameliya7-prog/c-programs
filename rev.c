#include<stdio.h>

int main()
{
    int i,a,b,c;
    printf("Give the number \n");
    scanf("%d",&a);
    
    for(i=1;a>0;i++)
    {
        b=a%10;
        printf("%d",b);
        a=a/10;
    }
    return 0;
}