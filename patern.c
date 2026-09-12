#include<stdio.h>

int main()
{
    int a,b,c,i;
    char space=' ';
    printf("Give the odd number for the patern \n");
    scanf("%d",&a);
    c=a%2;
    if(c!=0)
    {
        for(i=1;i<=a;i++)
       {
            for(int j;j<a-i;)
            {
                printf("%c",space);
            }
               
            for(b=1;b<=i;b++)
            {
                printf("$");
            }
            printf("\n");

        }
    }
    else
    {
        printf("Please give the odd number");
    }
    return 0;
}