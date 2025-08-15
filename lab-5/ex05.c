#include <stdio.h>
int main(){
    int num[8],max,min,i;
    for(i=0;i<8;i++){
        printf("Enter number %d: ",i+1);
        scanf("%d",&num[i]);
    }
    min=num[0];
    max=num[0];
    for(i=0;i<8;i++){
        if(max<=num[i])
            max=num[i];
    }
    for(i=0;i<8;i++){
        if(min>=num[i])
            min=num[i];
    }
    printf("Smallest number: %d\nLargest number: %d",min,max);
}