#include <stdio.h>
int main(void){long long b,r=1;int e;if(scanf("%lld%d",&b,&e)!=2||e<0)return 1;for(int i=0;i<e;++i)r*=b;printf("%lld\n",r);return 0;}
