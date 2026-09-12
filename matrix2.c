#include<stdio.h>

int main()
{
    int a,i,j,n=1,z;
    printf("Enter the number \n");
    scanf("%d",&a);

    for(i=1;i<=a;i++)
    {
        printf("\n");

        for(j=1;j<=4;j++)
       { 
        printf("%d \t",n);
        n++;
       }
    }
    z=sizeof(123);
    printf("The size of z is: %d",z);
    return 0;
}