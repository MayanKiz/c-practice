#include <stdio.h>
// Prints the action for a traffic light colour.

int main()
{
    char light;
    printf("Enter R, Y, or G: ");
    scanf(" %c", &light);
    switch (light)
    {
        case 'R': case 'r': printf("Stop\n"); break;
        case 'Y': case 'y': printf("Wait\n"); break;
        case 'G': case 'g': printf("Go\n"); break;
        default: printf("Invalid light\n");
    }
    return 0;
}
