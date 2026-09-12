#include<stdio.h>

int main()
{
    int a,i=1,no,sum=0;
    printf("Enter the number the totle time you want sum \n");
    scanf("%d",&a);
    printf("Give the number %d\n",a);
    while(i<=a)
    {
        scanf("%d",&no);
        sum=sum+no;
        i++;
    }
    printf("Your sum is %d",sum);
    return 0;
}