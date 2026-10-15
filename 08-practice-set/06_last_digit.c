#include <stdio.h>
int main(void){int n,d;if(scanf("%d",&n)!=1)return 1;d=n%10;printf("%d\n",d<0?-d:d);return 0;}
