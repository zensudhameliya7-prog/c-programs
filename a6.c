#include<stdio.h>

int main()
{
    int a,b,key;
    int c[5];
    printf("==== This is programm of finding number ====");
    printf("\n\n Give any five positive number \n\n");

    for(int i=0;i<5;i++)
    {
        printf("Give the %d th number: ",i+1);
        scanf("%d",&c[i]);
    }

    printf("Now give a key number which you want to finde: ");
    scanf("%d",&key);

    for(int i=0;i<5;i++)
    {
        if(key == c[i])
        {
            printf("Yes this number is avaible in these number");
            break;
        }
        else
        {
            goto end;
        }
    }
    end:
    {
        printf("This number is not avilabel");
    }
    return 0;
}