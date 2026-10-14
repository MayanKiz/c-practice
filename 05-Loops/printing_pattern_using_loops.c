#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    int size = 2 * n - 1;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            int top = i;
            int left = j;
            int bottom = size - 1 - i;
            int right = size - 1 - j;

            int smallest = top;

            if (left < smallest)
                smallest = left;

            if (bottom < smallest)
                smallest = bottom;

            if (right < smallest)
                smallest = right;

            printf("%d ", n - smallest);
        }

        printf("\n");
    }

    return 0;
}
