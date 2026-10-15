#include <stdio.h>
int is_even(int n){return n%2==0;}
int main(void){int n;if(scanf("%d",&n)!=1)return 1;puts(is_even(n)?"even":"odd");return 0;}
