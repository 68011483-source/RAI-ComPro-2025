#include <stdio.h>
#include <string.h>
int main(){
    int i;
    float maxscore=0;
    char maxstd[100];
    struct std{
        char name[100];
        int age;
        float score;
    };
    struct std s[3];
    for(i=0;i<3;i++){    
        printf("Student %d's name: ",i+1);
        scanf("%s",s[i].name);
        printf("Student %d's age: ",i+1);
        scanf("%d",&s[i].age);
        printf("Student %d's score: ",i+1);
        scanf("%f",&s[i].score);
    }
    for(i=0;i<=2;i++){    
        if(maxscore<s[i].score){
            strcpy(maxstd,s[i].name);
            maxscore=s[i].score;
        }
    }
    printf("The highest score belongs to %s at %.2f scores!",maxstd,maxscore);
}
