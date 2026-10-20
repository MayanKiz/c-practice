// Q2: Find the average of five array elements.
#include <stdio.h>
int main(void) {
    int a[5], sum = 0;
    for (int i = 0; i < 5; i++) { scanf("%d", &a[i]); sum += a[i]; }
    printf("Average = %.2f", sum / 5.0);
    return 0;
}
