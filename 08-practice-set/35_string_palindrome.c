#include <stdio.h>
#include <string.h>
int main(void){char s[1000];if(!fgets(s,sizeof s,stdin))return 1;size_t n=strcspn(s,"\n"),i=0;while(i<n/2&&s[i]==s[n-1-i])++i;puts(i==n/2?"palindrome":"not palindrome");return 0;}
