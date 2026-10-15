#include <stdio.h>
long long square(int n){return (long long)n*n;}
int main(void){int n;if(scanf("%d",&n)!=1)return 1;printf("%lld\n",square(n));return 0;}
