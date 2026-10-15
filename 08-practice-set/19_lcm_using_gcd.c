#include <stdio.h>
long long gcd(long long a,long long b){while(b){long long t=a%b;a=b;b=t;}return a;}
int main(void){long long a,b;if(scanf("%lld%lld",&a,&b)!=2)return 1;if(a<0)a=-a;if(b<0)b=-b;long long g=gcd(a,b);printf("%lld\n",g?(a/g)*b:0);return 0;}
