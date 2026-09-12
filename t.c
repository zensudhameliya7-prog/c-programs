#include<stdio.h>
int main()
{
    int a,j,b,i;
    printf("give the number of row: ");
    scanf("%d",&a);
    
    for(i=1;i<=a;i++)
    {
        for(j=a;j>=i;j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}