#include<stdio.h>
int fact(int number)
{
    if(number == 0 || number ==1 )
    {
        return 1;
    }
    else
    {
        return (number * fact(number-1));
    }
}
int main()
{
    int num;
    printf("Enter the number of factorial you want: ");
    scanf("%d",&num);
    printf("The factorial of %d is %d \n",num,fact(num));
    return 0;
}