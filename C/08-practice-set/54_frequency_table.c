#include <stdio.h>
int main(void){int a[500],n,used[500]={0};if(scanf("%d",&n)!=1||n<0||n>500)return 1;for(int i=0;i<n;++i)if(scanf("%d",&a[i])!=1)return 1;for(int i=0;i<n;++i){if(used[i])continue;int c=1;for(int j=i+1;j<n;++j)if(a[j]==a[i]){++c;used[j]=1;}printf("%d: %d\n",a[i],c);}return 0;}
