#include <stdio.h>
int main(void){int a[1000],n;if(scanf("%d",&n)!=1||n<0||n>1000)return 1;for(int i=0;i<n;++i)if(scanf("%d",&a[i])!=1)return 1;for(int i=1;i<n;++i){int k=a[i],j=i-1;while(j>=0&&a[j]>k){a[j+1]=a[j];--j;}a[j+1]=k;}for(int i=0;i<n;++i)printf("%s%d",i?" ":"",a[i]);putchar('\n');return 0;}
