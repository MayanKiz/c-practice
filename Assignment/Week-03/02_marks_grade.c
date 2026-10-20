// Q2: Display a grade based on marks out of 100.
#include <stdio.h>
int main(void) {
    int marks;
    scanf("%d", &marks);
    if (marks < 0 || marks > 100) printf("Invalid marks");
    else if (marks >= 90) printf("Grade A");
    else if (marks >= 80) printf("Grade B");
    else if (marks >= 70) printf("Grade C");
    else if (marks >= 60) printf("Grade D");
    else printf("Grade F");
    return 0;
}
