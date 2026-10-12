#include <stdio.h>
#define size 5

int main() {
    int arr[size], i;

    printf("enter %d elements:\n", size);

    for (i = 0; i < size; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nelements in the array are:\n");

    for (i = 0; i < size; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}
