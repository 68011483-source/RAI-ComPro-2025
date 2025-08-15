#include <stdio.h>
int main(){
    int num[3][3],i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter [%d][%d]: ",i,j);
            scanf("%d",&num[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i==j){
                num[i][j]=num[i][j];
            }
            else
                num[i][j]=0;
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
        printf("%d ",num[i][j]);
        }
        printf("\n");
    }
}