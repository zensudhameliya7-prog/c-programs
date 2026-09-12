#include<stdio.h>

int squ(int x)
{
    return x*x;
}
 
int main()
{
    int a,c;
    printf("Give the number for squre: ");
    scanf("%d",&a);
    c=squ(a);
    printf("The squre of %d is: %d",a,c);
    return 0;
}