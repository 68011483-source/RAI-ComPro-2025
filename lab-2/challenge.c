#include <stdio.h>
int main()
{
    int a,b,c,max,min,sum;
    float avg;
    printf("Enter integer 1: ");
    scanf("%d",&a);
    printf("Enter integer 2: ");
    scanf("%d",&b);
    printf("Enter integer 3: ");
    scanf("%d",&c);
    if (a>b & a>c){
        max = a;
        if (b>c)
            min = c;
        else
            min = b;}
    if (b>c & b>a){
        max = b;
        if (a>c)
            min = c;
        else
            min = a;}
    if (c>b & c>a){
        max = c;
        if (b>a)
            min = a;
        else
            min = b;}
    printf("Results:\n");
    printf("Minimum: %d\n",min);
    printf("Maximum: %d\n",max);
    printf("Sum: %d\n",a+b+c);
    printf("Average: %.2f\n",(a+b+c)/3.0);
}