#include <stdio.h>
#include <math.h>
int main(){
    int i;
    float d,sx,sy;
    struct Vector{
        float x,y;
    }v[2];
    for(i=0;i<2;i++){
        printf("x%d: ",i+1);
        scanf("%f",&v[i].x);
        printf("y%d: ",i+1);
        scanf("%f",&v[i].y);
    }
    sx=v[0].x+v[1].x;
    sy=v[0].y+v[1].y;
    printf("Resultant vector is equivalence to %.1fi+%.1fj",sx,sy);
}