#include <stdio.h>
int main(){
    struct time{
        int min,sec;
    };
    struct time t[3];
    int total=0,i;
    for(i=0;i<3;i++){
        printf("Time input (m:s): ");
        scanf("%d:%d",&t[i].min,&t[i].sec);
        total=total+(t[i].min*60)+t[i].sec;
    }
    printf("Total time elapsed: %d second(s)",total);
}