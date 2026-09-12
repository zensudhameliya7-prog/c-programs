#include<stdio.h>

int prime(int num)

{
    int a;
    for(int i=2;i<num;i++)
    {
        a = num % i;
        
        if(a == 0)
        {
            return printf("The number is a not prime number");
        }
        return 1;
    }
}

int main()
{
    int c,b;
    printf("Please give the number for check prime or not \n");
    scanf("%d",&b);
    
    if(prime(b))
    {
        printf("Number is Prime");
    }
    else
    {
        printf("Number is not Prime");
    }
    return 0;
}