#include <stdio.h>
int main(){
    int num,result,i;
    printf("Enter the number: ");
    scanf("%d",&num);
    result=num;
    for(i=1;i<num;i++)
        result=result*i;
    printf("Factorial of %d is %d",num,result);
}