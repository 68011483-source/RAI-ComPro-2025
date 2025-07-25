#include <stdio.h>
int main()
{
    int sid;
    float compro,phys,calc;
    char name[30];
    printf("Enter your Name: ");
    scanf("%s",name);
    printf("Enter your student id: ");
    scanf("%d",&sid);
    printf("Enter your Programming score: ");
    scanf("%f",&compro);
    printf("Enter your Physics score: ");
    scanf("%f",&phys);
    printf("Enter your Calculus score: ");
    scanf("%f",&calc);
    printf("Hi %s(%d)! Your GPA is %.2f",name,sid,(compro+phys+calc)/3);
}