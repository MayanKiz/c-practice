#include <stdio.h>
#include <string.h>
int main(void){char s[1000];if(!fgets(s,sizeof s,stdin))return 1;size_t n=strcspn(s,"\n");for(size_t i=0;i<n/2;++i){char t=s[i];s[i]=s[n-1-i];s[n-1-i]=t;}s[n]=0;puts(s);return 0;}
