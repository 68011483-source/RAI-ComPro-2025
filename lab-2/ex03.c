#include <stdio.h>
int main()
{
    int age,w;
    float h;
    char g[3],name[30],eq1[20],eq2[20];

    printf("Enter your Name: ");
    scanf("%s",name);
    printf("Enter your Age: ");
    scanf("%d",&age);
    printf("Enter your height: ");
    scanf("%f",&h);
    printf("Enter your weight: ");
    scanf("%d",&w);
    printf("Enter your gender: ");
    scanf("%s",g);
    printf("Enter your Education Qualification: ");
    scanf("%s %s",eq1,eq2);

    printf("\nName: %s\n",name);
    printf("Age: %d\n",age);
    printf("Gender: %s\n",g);
    printf("Height: %.1f\n",h);
    printf("Weight: %d\n",w);
    printf("Education: %s %s\n",eq1,eq2);
    return 0;
}