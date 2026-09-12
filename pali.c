#include<stdio.h>
int main()
{
    int b,c,i,sum=0;
    int a;
    printf("Give the three id for powerbill \n");
    for(i=1;i<=3;i++)
      {
        printf("For customer %d \n",i);
        printf("Give the id for powerbill: ");
        scanf(" %d",&a);
        printf("Now please give your unit: ");
        scanf(" %d",&b);

        if(b>0)
        {
          if(b>300)
            {
            c=b*12;
            }
          if(b<=300)
            { 
               c=(b<=300)?((b<=100)? b*5 : b*7) : b*10 ;
            }
          printf("The id number %d has to pay %d₹ \n",a,c);   
          sum=sum+c;
         
          printf("The total payment is %d₹",sum);
          }
      
        else
         {
            printf("Sorry, but this is not any unit.\n");
         }
    }
    return 0;
}