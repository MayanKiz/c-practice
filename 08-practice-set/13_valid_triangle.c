#include <stdio.h>
int main(void){long long a,b,c;if(scanf("%lld%lld%lld",&a,&b,&c)!=3)return 1;puts(a>0&&b>0&&c>0&&a+b>c&&a+c>b&&b+c>a?"valid":"invalid");return 0;}
