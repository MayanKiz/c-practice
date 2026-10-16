#include <stdio.h>
#include <ctype.h>
int main(void){int c=getchar();if(c==EOF)return 1;if(islower((unsigned char)c))c=toupper((unsigned char)c);else if(isupper((unsigned char)c))c=tolower((unsigned char)c);putchar(c);putchar('\n');return 0;}
