#include<stdio.h>

int main()
{
    int a[10],c[10],d[10];
    int b=0,num=0,o=0,k=0;
    printf("=== This is project for counting of odd-even ===");
    printf("\n\n Plese enter 10 random number\n");

    for(int i=0;i<10;i++)
    {
        printf("Enter the %d th element: ",i+1);
        scanf("%d",&a[i]);

        if(a[i] % 2 == 0)
        {
            c[o] = a[i];
            o++;
        }

        else
        {
            d[k]=a[i];
            k++;
        }

    }
    printf("\n\n The total number of odd is: %d",o);
    printf("\n\n The number are: %d\t",d[k]);
    printf("\n\n The total number of evev is: %d",k);
    printf("\n\n The number are: %d\t",c[o]);
    return 0;
}