#include <stdio.h>
int main(void){int n;long long s=1;if(scanf("%d",&n)!=1||n<1)return 1;if(n==1)s=0;for(int d=2;d<=n/d;++d)if(n%d==0){s+=d;if(d!=n/d)s+=n/d;}puts(s==n?"perfect":"not perfect");return 0;}
