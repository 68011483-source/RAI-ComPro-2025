#include <stdio.h>
#define pi 3.14
float radius;
float circumference(float),area(float);
int main(){
    printf("Enter the radius in cm: ");
    scanf("%f",&radius);
    printf("Circumference: %.2f\n",circumference(radius));
    printf("Area: %.2f\n",area(radius));
}
float circumference(float radius){
    float ans=2.0*pi*radius;
    return ans;
}
float area(float radius){
    float ans=pi*radius*radius;
    return ans;
}
