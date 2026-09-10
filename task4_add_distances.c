#include <stdio.h>

struct Distance
{
    int feet;
    int inch;
};

int main()
{
    struct Distance first, second, sum;

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

    sum.feet = first.feet + second.feet;
    sum.inch = first.inch + second.inch;

    if (sum.inch >= 12)
    {
        sum.feet = sum.feet + (sum.inch / 12);
        sum.inch = sum.inch % 12;
    }

    printf("\nTotal Distance = %d feet %d inch\n", sum.feet, sum.inch);

    return 0;
}
