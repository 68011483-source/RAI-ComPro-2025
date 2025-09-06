#include <stdio.h>
int main(){
    int num,sum=0,i;
    for(i=1;i<=10;i++){
        printf("%d.Enter the number: ",i);
        scanf("%d",&num);
        sum=sum+num;
    }
    printf("total sum is %d\nAverage is %.2f",sum,sum/10.0);
}