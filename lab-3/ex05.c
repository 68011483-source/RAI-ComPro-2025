#include <stdio.h>
int main(){
    int h,r;
    float vol;
    printf("Enter cone height: ");
    scanf("%d",&h);
    printf("Enter cone radius: ");
    scanf("%d",&r);
    vol=(22/7*r*r*h/3);
    printf("Cone volume = %.1f",vol);
    if(vol>260.0)
        printf("\nThis cone is perfect for Supun project");
    else
        printf("\nThis cone is not fit for this project");
}