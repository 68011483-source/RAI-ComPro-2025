#include <stdio.h>
int main(){
    int num,i;
    printf("Enter number: ");
    scanf("%d",&num);
    for(i=1;i<=12;i++)
        printf("%d x %2d = %2d\n",num,i,num*i);
}