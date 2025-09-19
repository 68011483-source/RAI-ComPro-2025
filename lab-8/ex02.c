#include <stdio.h>
int start,end;
void primenum(int,int);
int main(){
    printf("Enter the start and the end numbers: ");
    scanf("%d %d",&start,&end);
    primenum(start,end);
}
void primenum(int start,int end){
    int i;
    for(i=start;i<end;i++){
        if(i!=1 && i%2!=0 && i%3!=0 && i%5!=0 && i%7!=0)
            printf("%d ",i);
        if(i==2 || i==3 || i==5 || i==7)
            printf("%d ",i);
    }
}