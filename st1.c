#include<stdio.h>

int main()
{
    int array[3][3];
    int a[3][3];
    int b[3][3] = {};

    printf("=== This is code for 2d array ===");
    printf("\n\n Give number respectively");

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("\nGive the number of %d%d element: ",i,j);
            scanf("%d",&array[i][j]);
        }
    }

    printf("\n Now output\n");

     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("\t%d",array[i][j]);
        }
        printf("\n");
    }

    printf("\n Now please enter seconde matrix");

    for(int k=0;k<3;k++)
    {
        for(int l=0;l<3;l++)
        {
            printf("\nGive the number of %d%d element: ",k,l);
            scanf("%d",&a[k][l]);
        }
    }

    printf("\n Now output\n");

     for(int k=0;k<3;k++)
    {
        for(int l=0;l<3;l++)
        {
            printf("\t%d",array[k][l]);
        }
        printf("\n");
    }

    printf("Now I am print multiplication of these matix\n");

    for(int x=0;x<3;x++)
    {
        for(int y=0;y<3;y++)
        {
            for(int z=0;z<3;z++)
            {
                b[x][y]+= (a[x][z] * array[z][x]);
            }
            printf("\t%d",b[x][y]);
        }
        printf("\n");
    }

    return 0;
}