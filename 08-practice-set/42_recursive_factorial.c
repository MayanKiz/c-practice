#include <stdio.h>
unsigned long long fact(unsigned int n){return n<2?1:n*fact(n-1);}
int main(void){unsigned int n;if(scanf("%u",&n)!=1||n>20)return 1;printf("%llu\n",fact(n));return 0;}
