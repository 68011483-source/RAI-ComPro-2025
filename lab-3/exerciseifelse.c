#include <stdio.h>
int main()
{
    int num1,num2,dec,ans;
    printf("Enter num1 : ");
    scanf("%d",&num1);
    printf("Enter num2 : ");
    scanf("%d",&num2);
    printf("Calculator Menu : \n1.+\n2.-\n3.*\n4./\n5.%%\n");
    printf("Choose Menu : ");
    scanf("%d",&dec);
    if(dec==1){
        ans=num1+num2;
        printf("Ans: Num1+Num2 = %d\n",ans);}
    else if(dec==2){
        ans=num1-num2;
        printf("Ans: Num1-Num2 = %d\n",ans);}
    else if(dec==3){
        ans=num1*num2;
        printf("Choose menu: 3\nAns: Num1*Num2 = %d\n",ans);}
    else if(dec==4){
        ans=num1/num2;
        printf("Ans: Num1/Num2 = %d\n",ans);}
    else if(dec==5){
        ans=num1%num2;
        printf("Ans: Num1%%Num2 = %d\n",ans);}
    else
        printf("Invalid. Try again.\n");
}