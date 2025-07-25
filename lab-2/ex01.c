#include <stdio.h>
int main()
{
    int a;
    float b;
    char ch[2];
    printf("Please enter your integer value: ");
    scanf("%d",&a);
    printf("You entered %d ",a);

    printf("\nPlease enter your float value: ");
    scanf("%f",&b);
    printf("You entered %.1f ",b);

    printf("\nPlease enter your char value: ");
    scanf("%s",ch);
    printf("You entered %s",ch);
    return 0;
}