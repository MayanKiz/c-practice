#include <stdio.h>
int main(void){int a[1000],n,t,p=-1;if(scanf("%d",&n)!=1||n<0||n>1000)return 1;for(int i=0;i<n;++i)if(scanf("%d",&a[i])!=1)return 1;if(scanf("%d",&t)!=1)return 1;for(int i=0;i<n;++i)if(a[i]==t){p=i;break;}printf("%d\n",p);return 0;}
