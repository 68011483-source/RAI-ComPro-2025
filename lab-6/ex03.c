#include <stdio.h>
#include <math.h>
int main(){
    int i;
    double d,dx,dy;
    struct point{
        double x,y;
    }p[2];
    for(i=0;i<2;i++){
        printf("x%d: ",i+1);
        scanf("%lf",&p[i].x);
        printf("y%d: ",i+1);
        scanf("%lf",&p[i].y);
    }
    dx=pow((p[0].x-p[1].x),2);
    dy=pow((p[0].y-p[1].y),2);
    d=sqrt((dx+dy));
    printf("Distance between (%.1f,%.1f) and (%.1f,%.1f) is %.3f unit(s)",p[0].x,p[0].y,p[1].x,p[1].y,d);
}