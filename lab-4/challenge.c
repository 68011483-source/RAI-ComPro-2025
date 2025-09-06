#include <stdio.h>
int main(){
    int bal=0,withdr,depo,i;
    do{
        printf("====== ATM MENU ======\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Choose an option: ");
        scanf("%d",&i);
        if(i==1)
            printf("Current balance: %d\n",bal);
        else if(i==2){
            printf("Enter amount to deposit: ");
            scanf("%d",&depo);
            bal=bal+depo;
        }
        else if(i==3){
            printf("Enter amount to withdraw: ");
            scanf("%d",&withdr);
            bal=bal-withdr;
            printf("Withdrawal successful\n");
        }
    }while(i!=4); 
    printf("Thank for using the ATM\n");
}