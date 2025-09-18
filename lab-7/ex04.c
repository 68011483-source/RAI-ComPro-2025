#include <stdio.h>
int main(){
    int array[] = { 3, 1, 2, 4, 5, 6 };
    int *aptr,i;
    aptr=array;
    for(i=0;i<6;i++){
        printf("%d\n",*(aptr+i));
    }
}