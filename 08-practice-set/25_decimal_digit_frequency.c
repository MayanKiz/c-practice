#include <stdio.h>
int main(void){unsigned long long n;int d,c=0;if(scanf("%llu%d",&n,&d)!=2||d<0||d>9)return 1;do{if(n%10==(unsigned)d)++c;n/=10;}while(n);printf("%d\n",c);return 0;}
