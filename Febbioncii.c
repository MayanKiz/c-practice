#include <stdio.h>

int main() {

   int n;   
    int a = 0;
    int b = 1;
    int c;
printf("Enter the number of terms/series you want....");
    scanf("%d",&n);
    
    for(int i =1;i<=n;i++ )
        {
          printf("\n%d",a );
            c =a +b;
            a =b;
            b=c;


} 
    return 0;
}