#include <stdio.h>
int main(void){char s[1000];size_t n=0;if(!fgets(s,sizeof s,stdin))return 1;while(s[n]&&s[n]!='\n')++n;printf("%zu\n",n);return 0;}
