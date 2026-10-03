#include <stdio.h>

int main() {

   int n;   

printf("no of stars in last row or no of row...");
    scanf("%d",&n);
    
    for(int i = 1; i <= n; i++)
{
    for(int j = 1; j <= i; j++)
    {
        printf("* ");
    }

    printf("\n");
}
    return 0;
}