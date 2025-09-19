#include <stdio.h>
int sum(int,int);
int main(){
    int a,b;
    printf("Enter the two integers: ");
    scanf("%d %d",&a,&b);
    printf("%d\n",sum(a,b));
}
int sum(int a, int b){
    int ans;
    ans=a+b;
    return ans;
}