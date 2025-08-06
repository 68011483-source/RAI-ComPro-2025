#include <stdio.h>
int main(){
    int cal,phys,compro;
    char name[40],grade;
    float avg;
    printf("Enter your name: ");
    scanf("%s",name);
    printf("Enter your Calculus score: ");
    scanf("%d",&cal);
    printf("Enter your Physics score: ");
    scanf("%d",&phys);
    printf("Enter your ComPro score: ");
    scanf("%d",&compro);
    avg=(cal+phys+compro)/3.0;
    if(avg>=80)
        grade='A';
    else if(avg>=70 & avg<80)
        grade='B';
    else if(avg>=60 & avg<70)
        grade='C';
    else if(avg>=50 & avg<60)
        grade='D';
    else if(avg<50)
        grade='F';
    printf("%s, your average is %.2f. You got grade %c\n",name,avg,grade);
}