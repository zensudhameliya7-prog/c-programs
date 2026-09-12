#include<stdio.h>

int main()
{
    int a,i,j,n=1;
    printf("Give the number for matrix \n");
    scanf("%d",&a);
    /*1 2  3  4
      5 6. 7. 8
      9 10 11 12
    */
      for(i=1;i<=a;i++)
     {
      {
        for(j=1;j<=4;j++)
       { printf("%d \t",n);
        n++;
       }

      }
       printf("\n");
    }

      return 0;
}