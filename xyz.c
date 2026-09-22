#include <stdio.h>
#include <string.h>

#define MAX 50

// Function declarations
void addContact(char name[][50], char num[][11], int *count);
void displayContacts(char name[][50], char num[][11], int count);
void searchContact(char name[][50], char num[][11], int count);
void deleteContact(char name[][50], char num[][11], int *count);

int main()
{
    char name[MAX][50];
    char num[MAX][11];

    int count = 0;
    int choice;

    do
    {
        printf("\n========== CALL DIARY ==========\n");
        printf("1. Add Contact\n");
        printf("2. Display All Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Delete Contact\n");
        printf("5. Exit\n");
        printf("================================\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addContact(name, num, &count);
                break;

            case 2:
                displayContacts(name, num, count);
                break;

            case 3:
                searchContact(name, num, count);
                break;

            case 4:
                deleteContact(name, num, &count);
                break;

            case 5:
                printf("\nThank you for using Call Diary! 😎\n");
                break;

            default:
                printf("\nInvalid choice!\n");
        }

    } while(choice != 5);

    return 0;
}


// ================= ADD CONTACT =================

void addContact(char name[][50], char num[][11], int *count)
{
    if(*count >= MAX)
    {
        printf("\nCall Diary is full!\n");
        return;
    }

    printf("\nEnter name: ");
    scanf(" %[^\n]", name[*count]);

    do
    {
        printf("Enter 10 digit mobile number: ");
        scanf("%10s", num[*count]);

        if(strlen(num[*count]) != 10)
        {
            printf("Invalid number! Number must contain exactly 10 digits.\n");
        }

    } while(strlen(num[*count]) != 10);

    (*count)++;

    printf("\nContact added successfully! ✅\n");
}


// ================= DISPLAY CONTACTS =================

void displayContacts(char name[][50], char num[][11], int count)
{
    int i;

    if(count == 0)
    {
        printf("\nNo contacts available.\n");
        return;
    }

    printf("\n========== CONTACTS ==========\n");

    for(i = 0; i < count; i++)
    {
        printf("\nContact %d\n", i + 1);
        printf("Name   : %s\n", name[i]);
        printf("Number : %s\n", num[i]);
    }

    printf("\n==============================\n");
}


// ================= SEARCH CONTACT =================

void searchContact(char name[][50], char num[][11], int count)
{
    char search[50];
    int i;
    int found = 0;

    if(count == 0)
    {
        printf("\nNo contacts available.\n");
        return;
    }

    printf("\nEnter name to search: ");
    scanf(" %[^\n]", search);

    for(i = 0; i < count; i++)
    {
        if(strcmp(name[i], search) == 0)
        {
            printf("\nContact found! ✅\n");
            printf("Name   : %s\n", name[i]);
            printf("Number : %s\n", num[i]);

            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("\nContact not found! ❌\n");
    }
}


// ================= DELETE CONTACT =================

void deleteContact(char name[][50], char num[][11], int *count)
{
    char search[50];
    int i, j;
    int found = 0;

    if(*count == 0)
    {
        printf("\nNo contacts available.\n");
        return;
    }

    printf("\nEnter name to delete: ");
    scanf(" %[^\n]", search);

    for(i = 0; i < *count; i++)
    {
        if(strcmp(name[i], search) == 0)
        {
            for(j = i; j < *count - 1; j++)
            {
                strcpy(name[j], name[j + 1]);
                strcpy(num[j], num[j + 1]);
            }

            (*count)--;

            printf("\nContact deleted successfully! 🗑️\n");
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("\nContact not found! ❌\n");
    }
}