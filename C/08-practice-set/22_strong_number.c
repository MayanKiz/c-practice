#include <stdio.h>
int fact(int n){int f=1;for(int i=2;i<=n;++i)f*=i;return f;}
int main(void){int n,t,s=0;if(scanf("%d",&n)!=1||n<0)return 1;t=n;do{s+=fact(t%10);t/=10;}while(t);puts(s==n?"strong number":"not strong");return 0;}
