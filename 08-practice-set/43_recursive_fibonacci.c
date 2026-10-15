#include <stdio.h>
unsigned long long fib(unsigned int n){if(n<2)return n;return fib(n-1)+fib(n-2);}
int main(void){unsigned int n;if(scanf("%u",&n)!=1||n>40)return 1;printf("%llu\n",fib(n));return 0;}
