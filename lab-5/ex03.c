#include <stdio.h>
int main(){
    int marks[5],i,total,temp=0;
    for(i=0;i<5;i++){
        printf("Enter the marks of student %d: ",i+1);
        scanf("%d",&marks[i]);
    }
    total = (marks[0]+marks[1]+marks[2]+marks[3]+marks[4]);
    printf("Total marks : %d\n",total);
    for(i=0;i<5;i++){
        if(temp<=marks[i]){
            temp=marks[i];
        }
    }
    printf("Highest marks: %d",temp);
}