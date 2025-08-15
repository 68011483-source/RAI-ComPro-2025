#include <stdio.h>
int main(){
    int num[10],i,odd=0,even=0;
    for(i=0;i<10;i++){
        printf("Enter value %d: ",i+1);
        scanf("%d",&num[i]);
    }
    for(i=0;i<10;i++){
        if(num[i]%2==0)
            even++;
        else
            odd++;
    }
    printf("Even numbers: %d\nOdd numbers: %d",even,odd);
}