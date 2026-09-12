#include<stdio.h>

void hello()
{
    printf("Hello, Zensu \n");
}

int main()
{
    hello();
    printf("Hi");
    return 0;
}
/* We cannot call main  function  anywhere
but we can call any function in main.
Here output is Hello, Zensu
Hi
it maen hi is print in main function.*/

int hi()
{
    main();
    return 0;
}