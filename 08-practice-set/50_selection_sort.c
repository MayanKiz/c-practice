#include <stdio.h>
int main(void){int a[1000],n;if(scanf("%d",&n)!=1||n<0||n>1000)return 1;for(int i=0;i<n;++i)if(scanf("%d",&a[i])!=1)return 1;for(int i=0;i<n;++i){int m=i;for(int j=i+1;j<n;++j)if(a[j]<a[m])m=j;if(m!=i){int t=a[i];a[i]=a[m];a[m]=t;}}for(int i=0;i<n;++i)printf("%s%d",i?" ":"",a[i]);putchar('\n');return 0;}
