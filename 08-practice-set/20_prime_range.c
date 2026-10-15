#include <stdio.h>
int main(void){int n,any=0;if(scanf("%d",&n)!=1)return 1;for(int x=2;x<=n;++x){int p=1;for(int d=2;d<=x/d;++d)if(x%d==0){p=0;break;}if(p){printf("%s%d",any?" ":"",x);any=1;}}if(any)putchar('\n');else puts("no primes");return 0;}
