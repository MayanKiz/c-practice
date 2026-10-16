#include <stdio.h>
#include <ctype.h>
int main(void){int c,n=0;while((c=getchar())!=EOF){c=tolower((unsigned char)c);if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')++n;}printf("%d\n",n);return 0;}
