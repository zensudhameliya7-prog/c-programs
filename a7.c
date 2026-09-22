#include<stdio.h>

int main()
{
    int a[5];
    int b,i;

    printf("==== This code is for revers the number ====");
    printf("\n\n Give the any five number \n\n");

    for(int i=0;i<5;i++)
    {
        printf("Give the %d th number: ",i+1);
        scanf("%d",&a[i]);
    }

    for(int i=4;i>=0;i--)
    {
        printf("The %d th element is: %d\n",i+1,a[i]);
    }
    return 0;
}