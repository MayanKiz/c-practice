#include <stdio.h>
typedef struct{char name[80];double marks;} Student;
int main(void){Student s;if(scanf("%79s%lf",s.name,&s.marks)!=2)return 1;printf("%s %.2f\n",s.name,s.marks);return 0;}
