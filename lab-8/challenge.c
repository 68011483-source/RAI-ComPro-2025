#include <stdio.h>
int i,n;
struct student{
        char name[20];
        int score;
    };
float highgrade(struct student s[n]){
    int max=0;
    for(i=0;i<n;i++){
        if(max<s[i].score)
            max=s[i].score;
    }
    return max;
}
float lowgrade(struct student s[n]){
    int min=100;
    for(i=0;i<n;i++){
        if(min>s[i].score)
            min=s[i].score;
    }
    return min;
}
float averagegrade(struct student s[n]){
    float avg=(s[0].score+s[1].score+s[2].score)/3.0;
    return avg;
}
void checkpass(struct student s[n]){
    printf("\nStudent who passed\n");
    for(i=0;i<n;i++){
        if(s[i].score>=60)
            printf("%s\n",s[i].name);
    }
}
int main(){
    printf("Enter number of student: ");
    scanf("%d",&n);
    struct student s[n];
    for(i=0;i<n;i++){
        printf("\nEnter name of student %d: ",i+1);
        scanf("%s",s[i].name);
        printf("Enter grade of %s: ",s[i].name);
        scanf("%d",&s[i].score);
    }
    printf("\n--- Results ---\n");
    printf("Average grade: %.2f\n",averagegrade(s));
    printf("Highest grade: %.2f\n",highgrade(s));
    printf("Lowest grade: %.2f\n",lowgrade(s));
    checkpass(s);
    return 0;
}
