#include <stdio.h>
int main(){
    int num;
    do
    {
        printf("Enter number: ");
        scanf("%d",&num);
        if(num%2==0 & num!=0)
            printf("%d is even\n",num);
        else if(num%2==1)
            printf("%d is odd\n",num);
        else
            printf("Exiting Program");
    } while (num!=0);
}