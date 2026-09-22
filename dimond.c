#include<stdio.h>
#include<stdlib.h>

int main()

{
    int a,i,b,d;
    float c,sum,total;

    for(i=1;i<=3;i++)
    {
        printf("Please enter the password: ");
        scanf("%d",&a);

        if(a==1011)
        {
            goto menu;
        }

        else
        {
            printf("Your password is wrong \n");
        }
    }

    menu:
    
    printf("Give the value of number of dimond: ");
    scanf("%d",&b);
    printf("Give the value of weight: ");
    scanf(" %f",&c);
    
    if(c < 1.00)
    {
        sum = b * 1100;
    }
    else if(c < 1.50)
    {
        sum = b * 1025;
    }
    else if(c < 3.00)
    {
        sum = b * 900;
    }
    else if(c < 4.00)
    {
        sum = b * 800;
    }
    else if(c < 5.00)
    {
        sum = b * 650;
    }
    else
    {
        sum = b * 650;   // change rate if your question specifies another rate
    }
    
    printf("The total ammount is %f₹ \n",sum);
    goto end;

    end:

    printf("Thanks for visit this app \n");
    exit(0);

    return 0;
}