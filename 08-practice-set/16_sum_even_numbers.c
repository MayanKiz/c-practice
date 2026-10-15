#include <stdio.h>
int main(void){int n;long long s=0;if(scanf("%d",&n)!=1||n<0)return 1;for(int i=2;i<=n;i+=2)s+=i;printf("%lld\n",s);return 0;}
