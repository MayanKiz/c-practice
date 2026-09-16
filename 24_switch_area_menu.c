#include <stdio.h>

int main()
{
    int choice;
    float r, side, length, width;
    printf("1.Circle  2.Square  3.Rectangle\nEnter choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
        case 1: printf("Enter radius: "); scanf("%f", &r); printf("Area = %.2f\n", 3.14 * r * r); break;
        case 2: printf("Enter side: "); scanf("%f", &side); printf("Area = %.2f\n", side * side); break;
        case 3: printf("Enter length and width: "); scanf("%f %f", &length, &width); printf("Area = %.2f\n", length * width); break;
        default: printf("Invalid choice\n");
    }
    return 0;
}
