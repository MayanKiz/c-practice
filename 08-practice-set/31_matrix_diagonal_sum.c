#include <stdio.h>
int main(void){int n,x;long long s=0;if(scanf("%d",&n)!=1||n<1||n>100)return 1;for(int i=0;i<n;++i)for(int j=0;j<n;++j){if(scanf("%d",&x)!=1)return 1;if(i==j)s+=x;}printf("%lld\n",s);return 0;}
