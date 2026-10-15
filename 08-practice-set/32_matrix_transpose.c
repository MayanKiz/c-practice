#include <stdio.h>
int main(void){int a[50][50],r,c;if(scanf("%d%d",&r,&c)!=2||r<1||r>50||c<1||c>50)return 1;for(int i=0;i<r;++i)for(int j=0;j<c;++j)if(scanf("%d",&a[i][j])!=1)return 1;for(int j=0;j<c;++j){for(int i=0;i<r;++i)printf("%s%d",i?" ":"",a[i][j]);putchar('\n');}return 0;}
