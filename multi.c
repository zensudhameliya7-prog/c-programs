#include<stdio.h>
int main()
{
  
    int a,b,i;
      printf("Enter the number which table you want \n");
    scanf("%d",&a);
    
    for(i=1;i<=10;i++)
   { b=(a*i);
     printf("%d * %d = %d\n",a,i,b);
   }
  return 0;
}