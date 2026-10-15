#include <stdio.h>
int main(void){int a[50][50],n;if(scanf("%d",&n)!=1||n<1||n>50)return 1;for(int i=0;i<n;++i)for(int j=0;j<n;++j)if(scanf("%d",&a[i][j])!=1)return 1;for(int i=0;i<n;++i)for(int j=i+1;j<n;++j){int t=a[i][j];a[i][j]=a[j][i];a[j][i]=t;}for(int i=0;i<n;++i){for(int j=0;j<n;++j)printf("%s%d",j?" ":"",a[i][j]);putchar('\n');}return 0;}
