#include <stdio.h>

int main()
{
    int a[10], number, i, found = 0;
    printf("Enter 10 numbers: ");
    for (i = 0; i < 10; i++) scanf("%d", &a[i]);
    printf("Enter number to search: ");
    scanf("%d", &number);
    for (i = 0; i < 10; i++)
    {
        if (a[i] == number)
        {
            printf("Found at position %d\n", i + 1);
            found = 1;
            break;
        }
    }
    if (found == 0) printf("Not found\n");
    return 0;
}
