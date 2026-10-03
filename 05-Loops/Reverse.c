// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>

int main() {

   // printf("Try clicking the Run button.");

    int n;
    int rev =0;
    int rem;
printf("enter the numbers... ");

    scanf("%d",&n);
while(n>0)
{

    rem = n%10;
    
    rev = rev*10 + rem;
    n = n/10;
}

        
printf ("rev is %d",rev);
    return 0;
}