#include <stdio.h>
int main(void){int m,y,d;if(scanf("%d%d",&m,&y)!=2||m<1||m>12)return 1;switch(m){case 2:d=(y%400==0||(y%4==0&&y%100!=0))?29:28;break;case 4:case 6:case 9:case 11:d=30;break;default:d=31;}printf("%d\n",d);return 0;}
