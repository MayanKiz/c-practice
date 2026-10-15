#include <stdio.h>
int main(void){int y;if(scanf("%d",&y)!=1)return 1;puts(y>0&&(y%400==0||(y%4==0&&y%100!=0))?"leap year":"not a leap year");return 0;}
