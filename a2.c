#include<stdio.h>

int main()
{
    int a,i,sum=0;
    printf("How many number you want for sum");
    scanf("%d",&a);

    int num[a];

    for(i=0;i<a;i++)
    {
        printf("Enter the number");
        scanf("%d",&num[i]);
        sum=sum+num[i];
    }
    printf("The sum is %d",sum);
    return 0;
}