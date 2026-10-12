#include <stdio.h>

int main() {
    int arr[5] = {12, 45, 7, 23, 18};
    int max = arr[0];
    int min = arr[0];
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }

        if (arr[i] < min) {
            min = arr[i];
        }

        sum = sum + arr[i];
    }

    float avg = (float) sum / 5;

    printf("max = %d  min = %d  sum = %d  avg = %.2f\n",
           max, min, sum, avg);

    return 0;
}
