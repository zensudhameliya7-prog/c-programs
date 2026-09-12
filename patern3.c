#include<stdio.h>

int main()

{
    int a,j=1;
    char n='$',u=' ';
    printf("Enter the number:  ");
    scanf("%d",&a);

    for(int i=1;i<=a;i++)
    { 
        for(int c=1;c<=a-i;c++)
        {
            printf("%c",u);
        }
        for(int j=1;j<=i*2-1;j++)
        {
            printf("%c",n);
        }
        printf("\n");
    }
}    