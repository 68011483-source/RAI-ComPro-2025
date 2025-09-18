#include <stdio.h>
int main(){
    int test=0;
    int *t;
    t=&test;
    printf("The address in test variable is at: %p\n",t);
}