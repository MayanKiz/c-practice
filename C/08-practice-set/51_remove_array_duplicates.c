#include <stdio.h>
int main(void){int a[1000],n;if(scanf("%d",&n)!=1||n<0||n>1000)return 1;for(int i=0;i<n;++i)if(scanf("%d",&a[i])!=1)return 1;if(n){int k=1;for(int i=1;i<n;++i)if(a[i]!=a[k-1])a[k++]=a[i];for(int i=0;i<k;++i)printf("%s%d",i?" ":"",a[i]);}putchar('\n');return 0;}
