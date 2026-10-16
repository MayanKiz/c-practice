#include <stdio.h>

int main()
{
    int marks;

    printf("Enter marks: ");
    scanf("%d", &marks);
    if (marks >= 33) printf("Pass\n");
    else printf("Fail\n");
    return 0;
}
