#include <stdio.h>
int main()
{
    int num1,num2,dec,ans;
    printf("Enter num1 : ");
    scanf("%d",&num1);
    printf("Enter num2 : ");
    scanf("%d",&num2);
    printf("Calculator Menu : \n1.+\n2.-\n3.*\n4./\n5.%%\n");
    printf("Choose menu : ");
    scanf("%d",&dec);
    switch(dec){
        case 1:
            ans=num1+num2;
            printf("Ans : Num1+Num2 = %d",ans);
            break;
        case 2:
            ans=num1-num2;
            printf("Ans : Num1-Num2 = %d",ans);
            break;
        case 3:
            ans=num1*num2;
            printf("Ans : Num1*Num2 = %d",ans);
            break;
        case 4:
            ans=num1/num2;
            printf("Ans : Num1/Num2 = %d",ans);
            break;
        case 5:
            ans=num1%num2;
            printf("Ans : Num1%%Num2 = %d",ans);
            break;
        default:
            printf("Invalid. Try again.\n");
    }
}