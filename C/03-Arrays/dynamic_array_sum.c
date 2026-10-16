#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, sum = 0;

    printf("Enter how many numbers you want to enter to calculate the sum:\n");
    scanf("%d", &n);

    printf("Enter all %d numbers.\n", n);

    int *a = malloc(n * sizeof(int));

    if (a == NULL)
        return 1;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    printf("Sum is %d\n", sum);

    free(a);
    return 0;
}
