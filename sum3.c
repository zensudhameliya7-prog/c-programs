#include<stdio.h>

int main()

{
    int a,i=1,sum=0;
    printf("Give the number which all sum you want \n");
    scanf("%d",&a);

    while(i<=a)

    {
        sum=sum+i;
        i=i+1;
    }
    printf("your sum is %d \n",sum);
    return 0;
}