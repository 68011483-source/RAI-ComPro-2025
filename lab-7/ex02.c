#include <stdio.h>
int main(){
    int a=0,b=5;
    int *aptr,*bptr;
    aptr=&b;
    bptr=&a;
    printf("Before reverse: a=%d,b=%d\n",a,b);
    printf("After reverse: a=%d,b=%d\n",*aptr,*bptr);
}