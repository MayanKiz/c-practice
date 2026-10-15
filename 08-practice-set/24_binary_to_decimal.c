#include <stdio.h>
#include <limits.h>
int main(void){char s[65];unsigned long long v=0;if(scanf("%64s",s)!=1)return 1;for(int i=0;s[i];++i){if(s[i]!='0'&&s[i]!='1')return 1;if(v>(ULLONG_MAX-(s[i]-'0'))/2)return 1;v=v*2+(s[i]-'0');}printf("%llu\n",v);return 0;}
