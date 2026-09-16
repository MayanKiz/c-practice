#include <stdio.h>

int main()
{
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);
    if (marks >= 90) printf("A\n");
    else if (marks >= 75) printf("B\n");
    else if (marks >= 60) printf("C\n");
    else if (marks >= 33) printf("D\n");
    else printf("Fail\n");
    return 0;
}
