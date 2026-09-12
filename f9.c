#include<stdio.h>

int main()
{
    int a;
    float b;
    char c;
    printf("Give the three value: ");
    scanf("%d ",&a);
    scanf("%f ",&b);
    scanf("%c",&c);

    printf("The values are %d %f %c",a,b,c);
    return 0;
}