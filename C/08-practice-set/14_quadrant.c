#include <stdio.h>
int main(void){double x,y;if(scanf("%lf%lf",&x,&y)!=2)return 1;if(x==0&&y==0)puts("origin");else if(x==0)puts("y-axis");else if(y==0)puts("x-axis");else if(x>0&&y>0)puts("quadrant I");else if(x<0&&y>0)puts("quadrant II");else if(x<0&&y<0)puts("quadrant III");else puts("quadrant IV");return 0;}
