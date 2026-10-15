#include <stdio.h>
int main(void){int a[10000],n,t;if(scanf("%d",&n)!=1||n<0||n>10000)return 1;for(int i=0;i<n;++i)if(scanf("%d",&a[i])!=1)return 1;if(scanf("%d",&t)!=1)return 1;int lo=0,hi=n-1,p=-1;while(lo<=hi){int m=lo+(hi-lo)/2;if(a[m]==t){p=m;break;}if(a[m]<t)lo=m+1;else hi=m-1;}printf("%d\n",p);return 0;}
