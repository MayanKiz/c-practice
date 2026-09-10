#include <stdio.h>

struct Book
{
    char title[100];
    char author[50];
    float price;
};

int main()
{
    struct Book book[3];
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("\nEnter details of book %d\n", i + 1);

        printf("Enter title: ");
        scanf(" %99[^\n]", book[i].title);

        printf("Enter author: ");
        scanf(" %49[^\n]", book[i].author);

        printf("Enter price: ");
        scanf("%f", &book[i].price);
    }

    printf("\nBook Details\n");
    for (i = 0; i < 3; i++)
    {
        printf("\nBook %d\n", i + 1);
        printf("Title: %s\n", book[i].title);
        printf("Author: %s\n", book[i].author);
        printf("Price: %.2f\n", book[i].price);
    }

    return 0;
}
