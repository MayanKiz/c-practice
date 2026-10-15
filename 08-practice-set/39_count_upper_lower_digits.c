#include <stdio.h>
#include <ctype.h>
int main(void){int c;long u=0,l=0,d=0;while((c=getchar())!=EOF){unsigned char x=(unsigned char)c;if(isupper(x))++u;else if(islower(x))++l;else if(isdigit(x))++d;}printf("upper=%ld lower=%ld digits=%ld\n",u,l,d);return 0;}
