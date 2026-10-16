#include <stdio.h>

struct distance
{
    int feet;
    int inch;
};

int main()
{
    struct distance first, second, total;

    printf("Enter first distance\n");
    printf("Feet: ");
    scanf("%d", &first.feet);
    printf("Inch: ");
    scanf("%d", &first.inch);

    printf("\nEnter second distance\n");
    printf("Feet: ");
    scanf("%d", &second.feet);
    printf("Inch: ");
    scanf("%d", &second.inch);

    total.feet = first.feet + second.feet;
    total.inch = first.inch + second.inch;

    if (total.inch >= 12)
    {
        total.feet = total.feet + (total.inch / 12);
        total.inch = total.inch % 12;
    }

    printf("\nTotal Distance = %d feet %d inch\n", total.feet, total.inch);

    return 0;
}
