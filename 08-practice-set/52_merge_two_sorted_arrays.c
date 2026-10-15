#include <stdio.h>
int main(void){int a[500],b[500],n,m;if(scanf("%d",&n)!=1||n<0||n>500)return 1;for(int i=0;i<n;++i)if(scanf("%d",&a[i])!=1)return 1;if(scanf("%d",&m)!=1||m<0||m>500)return 1;for(int i=0;i<m;++i)if(scanf("%d",&b[i])!=1)return 1;int i=0,j=0,k=0;while(i<n||j<m){int v;if(j==m||(i<n&&a[i]<=b[j]))v=a[i++];else v=b[j++];printf("%s%d",k++?" ":"",v);}putchar('\n');return 0;}
