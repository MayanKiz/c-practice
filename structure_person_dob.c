#include <stdio.h>

struct dob
{
    int day;
    int month;
    int year;
};

struct person
{
    char name[50];
    struct dob dob;
};

int main()
{
    struct person person;

    printf("Enter name: ");
    scanf(" %49[^\n]", person.name);

    printf("Enter day of birth: ");
    scanf("%d", &person.dob.day);

    printf("Enter month of birth: ");
    scanf("%d", &person.dob.month);

    printf("Enter year of birth: ");
    scanf("%d", &person.dob.year);

    printf("\nPerson Details\n");
    printf("Name: %s\n", person.name);
    printf("Date of Birth: %02d/%02d/%d\n", person.dob.day, person.dob.month, person.dob.year);

    return 0;
}
