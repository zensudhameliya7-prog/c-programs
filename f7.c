#include<stdio.h>
int sum(int x,int y)
{
    return x+y;
}
int minus(int p,int q)
{
    return p-q;
}

int main()
{
    int a,b,c;
    printf("Give the two number \n");
    scanf("%d%d",&b,&c);
    printf("Enter 1 for sum,2 for minus: ");
    scanf("%d",&a);

    switch(a)
    {
        case 1:
        {
            printf("The sum is: %d",sum(b,c));
        }

        case 2:
        {
            printf("The minus is: %d",minus(b,c));
        }

    }
    return 0;
}