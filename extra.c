#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

int view(char name[5][50],char num[5][9],char mail[5][50])
{
  int i,j;

  char name[5][50] = {"Dax","Papa","Mom","Devam","Khushal"};
  char num[5][9] = {"9925830643","9756373529","8573754018","7437803714","1234567890"};
  char mail[5][50] = {"d1@gmail.com","p1@gamil.com","m1@gamil.com",
                      "de@gamil.com","k1@gmail.com"};

  printf("====These are contact's detail====");
  for(int i=0;i<5;i++)
  {
    printf("\n\n%d. %s",i,name[i]);
    printf("\n   %s",num[i]);
    printf("\n   %s",mail[i]);
  }


  return 0;
}

int search(char name[])
{
  char nam[5][50];

  printf("\n\n Please, Give name or  number of contct's: ");
  gets(nam);

  char xi[5][50] = view(nam,nam,nam);

  if( nam[5][50] == xi[5][50])
  {
    printf("\nThe number or name is there");
    printf("\n %s %s %s",xi[5][50]);
  }
}
