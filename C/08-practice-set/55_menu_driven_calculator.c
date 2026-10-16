#include <stdio.h>
int main(void){double a,b;char op;if(scanf("%lf %c %lf",&a,&op,&b)!=3)return 1;switch(op){case '+':printf("%.2f\n",a+b);break;case '-':printf("%.2f\n",a-b);break;case '*':printf("%.2f\n",a*b);break;case '/':if(b==0){fputs("division by zero\n",stderr);return 1;}printf("%.2f\n",a/b);break;default:fputs("unknown operator\n",stderr);return 1;}return 0;}
