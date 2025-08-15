#include <stdio.h>
int main(){
    int num[3][3],i,j,k,ans[3][3]={(0,0,0),(0,0,0),(0,0,0)};
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter [%d][%d]: ",i,j);
            scanf("%d",&num[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                ans[i][j]=ans[i][j]+(num[i][k]*num[k][j]);
            }
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",ans[i][j]);
        }
        printf("\n");
    }
}