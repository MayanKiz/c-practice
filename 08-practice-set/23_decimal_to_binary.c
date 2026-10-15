#include <stdio.h>
int main(void){unsigned int n,b[sizeof(unsigned int)*8],k=0;if(scanf("%u",&n)!=1)return 1;do{b[k++]=n%2;n/=2;}while(n);while(k)printf("%u",b[--k]);putchar('\n');return 0;}
