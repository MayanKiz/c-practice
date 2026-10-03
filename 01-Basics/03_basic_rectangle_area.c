#include <stdio.h>

int main()
{
    float length, width;

    printf("Enter length and width: ");
    scanf("%f %f", &length, &width);
    printf("Area = %.2f\n", length * width);
    return 0;
}
