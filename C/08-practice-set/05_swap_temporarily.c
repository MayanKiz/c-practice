#include <stdio.h>
int main(void){int a,b,t;if(scanf("%d%d",&a,&b)!=2)return 1;t=a;a=b;b=t;printf("%d %d\n",a,b);return 0;}
