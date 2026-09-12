#include<stdio.h>

int main()
{
    int count,a=1,sum=0,no;
    printf("Give the number for the sum from one \t\n");
    scanf("%d",&count);

    while(a<=count)
    {
        scanf("%d",&no);
        sum=sum+no;
        a++;
    }
    printf("Your sum is %d \t\n",sum);
    return 0;
}