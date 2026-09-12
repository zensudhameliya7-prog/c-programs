#include<stdio.h>
int main()
{
    int c,b,i;
    char a;
        printf("Give the id for powerbill: ");
        scanf("%c",&a);
        printf("Now please give your unit: ");
        scanf("%d",&b);
          { 
            c=(b<=300)?((b<=200)?((b<=100)? b*5:b*0): b*7) : b*10 ;
          }
        printf("The id number %c has to pay %d₹ \n",a,c);   
    return 0;
}