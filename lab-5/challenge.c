#include <stdio.h>
int main(){
    int n,i,j,already_printed;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int e[n],count[100]={0};
    printf("Enter %d integers: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&e[i]);
        count[e[i]]++;
    }
    for(i=0;i<n;i++){
        already_printed = 0;
        for(j=0;j<i;j++){
            if(e[i] == e[j]){
                already_printed = 1;
                break;
            }
        }
        if(!already_printed){
            printf("Element %d occurs %d times\n",e[i],count[e[i]]);
        }
    }
}