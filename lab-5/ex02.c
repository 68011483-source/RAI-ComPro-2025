#include <stdio.h>
int main(){
    int original[]={1,2,3,4,5,6,7,8,9},reversed[9],i,j;
    for(i=0;i<9;i++){
        j=8-i;
        reversed[i]=original[j];
    }
    printf("Reversed Array: ");
    for(i=0;i<9;i++){
        printf("%d ",reversed[i]);
    }
}