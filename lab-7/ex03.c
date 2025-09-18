#include <stdio.h>
int main(){
    int array[] = { 3, 1, 2, 4, 5, 6 },i,max,size=6;
    int *aptr;
    aptr=array;
    for(i=0;i<size;i++){
        if(*(aptr+i)>max)
            max=*(aptr+i);
    }
    printf("Max value: %d",max);
}