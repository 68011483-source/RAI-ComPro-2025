#include <stdio.h>
int main(){
    int *aptr,a[5],i,j,temp1,temp2;
    aptr=a;
    printf("Enter 5 integers: ");
    scanf("%d %d %d %d %d",&*aptr,&*(aptr+1),&*(aptr+2),&*(aptr+3),&*(aptr+4));
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(*(aptr+j)>*(aptr+j+1)){
                temp1=*(aptr+j);
                temp2=*(aptr+j+1);
                *(aptr+j+1)=temp1;
                *(aptr+j)=temp2;
            }
        }
    }
    printf("Sorted: ");
    for(i=0;i<5;i++)
        printf("%d ",*(aptr+i));
}