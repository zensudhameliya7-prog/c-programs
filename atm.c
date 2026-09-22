#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,sum=10000,dep,with,pin;
    for(int i=1;i<=3;i++)
    {
      printf("Please,enter the 4 digit PIN: ");
      scanf("%d",&a);
     
      if(a==5525)
      {
        goto menu;
      }
      else
      {
        printf("Your PIN is wrong \n");
      }
    }

    printf("Your account is locked \n");
    printf("Please goto the bank for unlock it \n");
    goto end;

    menu:
    {
        printf("==== Welcone to ATM Menu ==== \n");
        printf("1. Check Balance \n");
        printf("2.Deposit \n");
        printf("3.Withdraw \n");
        printf("4.Change PIN \n");
        printf("5.Exit \n");

        scanf("%d",&b);
        switch(b)
        {
            case 1:
            printf("Your current bank balance is 10000₹\n");
            goto menu;

            case 2:
            printf("How much cash you want to deposit? \n");
            printf("Ammount must gretter than 0₹ \n");
            scanf("%d",&dep);

               if(dep>0)
               
               {
                sum=sum+dep;
                printf("Now your current bank balance is %d₹ \n",sum);
                goto menu;
               }

               else
               {
                printf("This is not valide \n");
                goto menu;
               }

            case 3:
            printf("How much cash you want to withdraw? \n");
            scanf("%d",&with);

               if(with>0 && with<=sum)
               
               {
                sum=sum-with;
                printf("Now your current bank balance is %d₹ \n",sum);
                goto menu;
               }

               else
               {
                printf("This is not valide \n");
                goto menu;
               }

            case 4:
            printf("Please enter your current PIN \n");
            scanf("%d",&pin);

               if(pin==a)

               {
                printf("Please enter the new PIN");
                scanf("%d",&a);
                printf("Your PIN is updated \n");
                goto menu;
               }

               else

               {
                printf("Sorry,this PIN is wrong \n");
                goto menu;
               }

            case 5:
            goto end;
            
            if(b>5)

            {
              printf("This is invalid");
              goto menu;
            }
        }
    }
    end:
    {
        printf("Thank you for using ATM \n");
        printf("Your final balance is: %d₹ \n",sum);
        goto last;
    }
    last:
    {
      exit(0);
    }
   return 0;
}