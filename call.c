#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void add(char number[][11],char name[][50])
{
  add :
  printf("\nPlease enter the name: ");
  fgets(name[0],50,stdin);
  printf("\nNow enter the mobile number: ");
  fgets(number,11,stdin);

  if(strlen(number) != 10)
  {
    printf("\nThis is not valid! ❌");
    printf("\nInvalid number! Number must contain exactly 10 digits.");
    goto add;
  }

  printf("\nContact added successfully! ✅\n");

}

void show(char name[][50],char number[][11])
{
  for(int i=0;i<10;i++)
  {
    printf("\n%d. %s - %s",i+1,name[i],number[i]);
  }
}

void search(char name[][50],char number[][10])
{
  int found=0;
  char a;
  printf("\nNow enter the name: ");
  fgets(name[0],50,stdin);
  scanf("%*d",&a);

  for(int i=0;i<5;i++)
  {
    if(strcmp(name[i],search) == 0)
    {
      printf("\nContact found! ✅\n");
      printf("Name   : %s\n", name[i]);
      printf("Number : %s\n", number[i]);
      found = 1;
      break;
    }
    else
    {
      printf("\nThere is not a number");
      break;
    }
  }
}

int main()
{
  int a,b;
  char nam[50][50];
  char num[5][10];

  menu:

  { printf("====================");
   printf("\n\n Welcome to call diary \n\n");
   printf("1. Add number");
   printf("\n2. Show contact");
   printf("\n3. Search contact");
   printf("\n4. Delete contact");
   printf("\n5. Exit");
   printf("\n\n====================");
   printf("\nEnter your choice: ");
   scanf("%d",&a);
   getchar();
  }

  switch(a)
  {
    case 1:
    {
      printf("hi");
      add(nam,num);
      goto menu;
    }

    case 2:
    {
      show(nam,num);
      goto menu;
    }

    case 3:
    {
      search(nam,num);
      goto menu;
    }
  }
}