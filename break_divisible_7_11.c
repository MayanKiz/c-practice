#include <stdio.h>

int main()
{
    int i;
    for (i = 1; i <= 100; i++)
    {
        printf("%d\n", i);
        if (i % 7 == 0 && i % 11 == 0) break;
    }
    return 0;
}
