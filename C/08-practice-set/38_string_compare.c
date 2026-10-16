#include <stdio.h>
#include <string.h>
int main(void){char a[256],b[256];if(scanf("%255s%255s",a,b)!=2)return 1;int r=strcmp(a,b);puts(r==0?"equal":r<0?"first comes before second":"second comes before first");return 0;}
