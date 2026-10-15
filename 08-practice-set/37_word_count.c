#include <stdio.h>
#include <ctype.h>
int main(void){int c,in=0;unsigned long n=0;while((c=getchar())!=EOF){if(isspace((unsigned char)c))in=0;else if(!in){++n;in=1;}}printf("%lu\n",n);return 0;}
