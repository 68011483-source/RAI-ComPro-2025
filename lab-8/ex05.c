#include <stdio.h>
int n,i;
int odd(int a[]),even(int a[]);
int main(){
    printf("Enter size of array: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("Input %d: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("Sum of even number: %d\n",even(a));
    printf("Sum of odd number: %d\n",odd(a));
}
int odd(int a[n]){
    int oddsum=0;
    for(i=0;i<n;i++){
        if(a[i]%2!=0)
            oddsum+=a[i];
    }
    return oddsum;
}
int even(int a[n]){
    int evensum=0;
    for(i=0;i<n;i++){
        if(a[i]%2==0)
            evensum+=a[i];
    }
    return evensum;
}