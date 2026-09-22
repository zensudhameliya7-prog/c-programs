#include<stdio.h>

int main()

{
    int num[5];
    int i,min;

    for(i=0;i<5;i++)
    {
        printf("Give the value of %dth element: ",i+1);
        scanf("%d",&num[i]);
    }

        min=num[0];

    for(i=1;i<5;i++)
    {

        if(num[i]<min)
        {
            min =num[i];
        }
    }
    
    printf("The minimum number is %d",min);
    return 0;
}