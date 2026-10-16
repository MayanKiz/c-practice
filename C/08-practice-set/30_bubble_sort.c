#include <stdio.h>
int main(void){int a[1000],n;if(scanf("%d",&n)!=1||n<0||n>1000)return 1;for(int i=0;i<n;++i)if(scanf("%d",&a[i])!=1)return 1;for(int e=n-1;e>0;--e){int changed=0;for(int j=0;j<e;++j)if(a[j]>a[j+1]){int t=a[j];a[j]=a[j+1];a[j+1]=t;changed=1;}if(!changed)break;}for(int i=0;i<n;++i)printf("%s%d",i?" ":"",a[i]);putchar('\n');return 0;}
