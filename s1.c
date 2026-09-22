#include<stdio.h>

int eo(int array[])
{
    for(int j=0;j<10;j++)
    {
        int x= array[j]%2;
        
        if(x==0)
        {
            printf("The given number %d is even \n",array[j]);
        }

        else
        {
            printf("The given number %d is odd \n",array[j]);
        }
    }
    return 0;
}

int avg(int arra[])
{
    int sum=0;

    for(int k=0;k<10;k++)
    {
        sum = sum+arra[k];
    }

    return sum/10.0;
}

int num(int array1[])
{
    int o,z;
    printf("Give the number from this entered numbers: ");
    scanf("%d",&o);
    printf("The number is: %d \n",array1[o]);
    return 0;
}

int main()
{
    int arr[10];
    int a,b;
    printf("==This code finde even-odd,average,return number's count== \n");
    printf("Give any 10 number: \n");

    for(int i=0;i<10;i++)
    {
        printf("Give the %dth number: ",i);
        scanf("%d",&arr[i]);
    }

    eo(arr);
    printf("The average of these number is: %d\n",avg(arr));
    num(arr);
    printf("Thanks visit.");
    return 0;
}