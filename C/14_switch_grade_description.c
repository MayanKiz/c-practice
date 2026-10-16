#include <stdio.h>

int main()
{
    char grade;
    printf("Enter grade: ");
    scanf(" %c", &grade);
    switch (grade)
    {
        case 'A': case 'a': printf("Excellent\n"); break;
        case 'B': case 'b': printf("Very Good\n"); break;
        case 'C': case 'c': printf("Good\n"); break;
        case 'D': case 'd': printf("Pass\n"); break;
        case 'F': case 'f': printf("Fail\n"); break;
        default: printf("Invalid grade\n");
    }
    return 0;
}
