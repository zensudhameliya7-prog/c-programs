#include<stdio.h>

int main()

{
    int num[5];
    int i,a,max=0;

    for(i=0;i<5;i++)
    {
        printf("Give the value of %dth element: ",i+1);
        scanf("%d",&num[i]);
    
        
        if(num[i]>max)
        {
            max=num[i];
        }
    }
    
    printf("The largest number is %d",max);
    return 0;
}