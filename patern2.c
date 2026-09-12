#include <stdio.h>
int main()
{
    int a, b;
    char c = '&', d = '*', k = ' ';
    printf("Enter the num");
    scanf("%d", &a);

    for (int i = 1; i <= a; i++)
    {
        b = i % 2;
        if (b == 0)
        {
            for (int u = 0; u < a - i; u++)
            {
                printf("%c", k);
            }
            for (int j = 1; j <= i * 2 - 1; j++)
            {
                printf("%c", c);
            }
        }
        else
        {
            for (int g = 0; g < a - i; g++)
            {
                printf("%c", k);
            }
            for (int z = 1; z <= i * 2 - 1; z++)
            {

                printf("%c", d);
            }
        }
        printf("\n");
    }
    return 0;
}