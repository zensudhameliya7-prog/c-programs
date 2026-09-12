#include<stdio.h>

int main()
{
    int a=5,b=4;
    float c=847878;
    printf("Give the width,precence,value:  ");
    scanf(" %d %d %f",&a,&b,&c);

    printf("%*.*f",a,b,c);
    return 0;
}