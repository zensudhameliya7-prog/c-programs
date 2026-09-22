#include<stdio.h>

int count(char stri[])
{
    int sum=0;

    for(int i=0;;i++)
    {
        if(stri[i] == '\0')
        {
            break;
        }

        else
        {
            sum=sum+1;
        }
    }
    return sum;
}

int vowels(char strin[])
{
    int sum=0;
    for(int j=0;;j++)
    {
        if(strin[j] == '\0')
        {
            break;
        }

        else
        {
            if(strin[j] == 'a'|| strin[j] == 'e'||strin[j] == 'i'||strin[j] == 'o'||strin[j] == 'u' ||
                 strin[j] == 'A'||'E'||'I'||'O'||'U')
            {
                sum=sum+1;
            }
            else
            {
                continue;
            }
        }
    }
    printf("The total number of vowels are: %d",sum);

    return 0;
}

int upper(char string[])
{
    int sum=0,ha=0;
    for(int k;;k++)
    {
        if('a' <= string[k] <= 'z')
        {
            sum=sum+1;
        }

        else if('A' <= string[k] <='Z')
        {
            ha=ha+1;
        }
    }

    printf("The total uppercase is: %d",ha);
    printf("The lowercase is: %d",sum);
    return 0;
}

int main()
{
    char str[67];
    printf("=== This is programm for count string length === \n");
    printf("Give the any sentence\n");
    fgets(str, sizeof(str),stdin);
    // now call hear function
    printf("The total number of string character is: %d",count(str));
    upper(str);
    return 0;
}