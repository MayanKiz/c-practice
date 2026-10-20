// Q1: Find maximum and minimum among five array elements.
#include <stdio.h>
int main(void) {
    int a[5], max, min;
    for (int i = 0; i < 5; i++) scanf("%d", &a[i]);
    max = min = a[0];
    for (int i = 1; i < 5; i++) {
        if (a[i] > max) max = a[i];
        if (a[i] < min) min = a[i];
    }
    printf("Max = %d\nMin = %d", max, min);
    return 0;
}
