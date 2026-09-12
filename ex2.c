#include <stdio.h>

int main()

{
    int a,b,i;
    printf("give the positive number you want for loop \n");
    scanf("%d",&a);

    if(a<=0)
    {
        printf("Invaide number give the positive number \n");
    }
     
    else
    {
        //loop
        b=a%2;
        for(i=1;i<=a;i++)
            {
                printf("%d \n",i);
            }
        if(b==0)
        {
            printf("Your number is even \n");
            for(i=2;i<=a;i=i+2)
           {
            printf("%d",i);
           }
        }
        else
        {
            printf("Your number is odd \n");
            for(i=1;i<=a;i=i+2)
            {
                printf("%d",i);
            }       
        }
    }
    return 0;
}