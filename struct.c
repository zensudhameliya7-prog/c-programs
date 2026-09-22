#include<stdio.h>

struct student
{
    char name[34];
    int id;
    float marks;
}Jay;

int main()
{
    struct student Jay = {"Jay",84,83.4};
    printf("Name: %s, id: %d, marks: %f",Jay.name,Jay.id,Jay.marks);
    return 0;
}