#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int age;

    fp = fopen("data.txt", "w");

    if (fp == NULL) {
        printf("file can not be opened!\n");
        return 1;
    }

    printf("enter name and age: ");
    if (scanf("%49s %d", name, &age) != 2) {
        fclose(fp);
        return 1;
    }

    fprintf(fp, "%s %d\n", name, age);
    fclose(fp);

    fp = fopen("data.txt", "r");

    if (fp == NULL) {
        printf("file can not be opened!\n");
        return 1;
    }

    if (fscanf(fp, "%49s %d", name, &age) == 2) {
        printf("\ndata from file:\n");
        printf("name: %s, age: %d\n", name, age);
    }

    fclose(fp);
    return 0;
}
