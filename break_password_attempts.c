#include <stdio.h>
#include <string.h>

int main()
{
    char password[20];
    int i;
    for (i = 1; i <= 3; i++)
    {
        printf("Enter password: ");
        scanf("%19s", password);
        if (strcmp(password, "1234") == 0)
        {
            printf("Correct password\n");
            break;
        }
        printf("Wrong password\n");
    }
    if (i == 4) printf("No attempts left\n");
    return 0;
}
