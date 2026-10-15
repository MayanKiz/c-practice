#include <stdio.h>
int main(void){int a,b,c;if(scanf("%d%d%d",&a,&b,&c)!=3)return 1;int m=a<b?a:b;if(c<m)m=c;printf("%d\n",m);return 0;}
