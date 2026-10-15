#include <stdio.h>
int main(void){int a,b;if(scanf("%d%d",&a,&b)!=2||b==0)return 1;puts(a%b?"not divisible":"divisible");return 0;}
