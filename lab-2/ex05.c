#include <stdio.h>
int main()
{
    int age;
    float h;
    char name[20],sur[20],uni[30];
    printf("Enter your full name: ");
    scanf("%s %s",name,sur);
    printf("Enter your age: ");
    scanf("%d",&age);
    printf("Enter your height: ");
    scanf("%f",&h);
    printf("Enter your university name: ");
    scanf("%s",uni);
    printf("Hi! Everyone. This is %c.%s from %s. I am %d years old and my height is %.1f cm tall.",sur[0],name,uni,age,h);
}