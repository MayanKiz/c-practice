#include <stdio.h>

struct employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct employee employee[5];
    int i, highest = 0;

    for (i = 0; i < 5; i++)
    {
        printf("\nEnter details of employee %d\n", i + 1);

        printf("Enter id: ");
        scanf("%d", &employee[i].id);

        printf("Enter name: ");
        scanf(" %49[^\n]", employee[i].name);

        printf("Enter salary: ");
        scanf("%f", &employee[i].salary);

        if (i == 0 || employee[i].salary > employee[highest].salary)
        {
            highest = i;
        }
    }

    printf("\nEmployee with Highest Salary\n");
    printf("Id: %d\n", employee[highest].id);
    printf("Name: %s\n", employee[highest].name);
    printf("Salary: %.2f\n", employee[highest].salary);

    return 0;
}
