#include <stdio.h>
int main(){
    int array[] = { 3, 1, 2, 4, 5, 6 };
    int *aptr,sum=0,i;
    aptr=array;
    for(i=0;i<6;i++){
        sum+=*(aptr+i);
    }
    printf("The sum of array is: %d\n",sum);
}