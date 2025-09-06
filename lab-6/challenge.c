#include <stdio.h>
#include <string.h>
int main(){
    int i;
    float maxstdavg,maxsubavg,subavg[4];
    char topstd[20],topsub[20],sub[4][20]={"Math","English","Science","History"};
    struct s{
        char name[20];
        int id;
        float grade[4],avg;
    }s[3];
    for(i=0;i<3;i++){
        printf("Enter name, ID, and 4 grades for student %d:\n",i+1);
        scanf("%s %d %f %f %f %f",s[i].name,&s[i].id,&s[i].grade[0],&s[i].grade[1],&s[i].grade[2],&s[i].grade[3]);
        s[i].avg=(s[i].grade[0]+s[i].grade[1]+s[i].grade[2]+s[i].grade[3])/4.0;
    }
    
    maxstdavg=s[0].avg;
    strcpy(topstd,s[0].name);
    for(i=0;i<3;i++){
        if(maxstdavg<s[i].avg){
            strcpy(topstd,s[i].name);
            maxstdavg=s[i].avg;
        }
    }
    printf("\nStudent Averages:\n");
    for(i=0;i<3;i++){
        printf("%s (ID: %d): %.2f\n",s[i].name,s[i].id,s[i].avg);
    }
    printf("\nTop Student: %s with %.2f\n ",topstd,maxstdavg);
    
    
    for(i=0;i<4;i++){
        subavg[i]=(s[0].grade[i]+s[1].grade[i]+s[2].grade[i])/3;
        printf("%s: %.2f\n",sub[i],subavg[i]);
    }
    maxsubavg=subavg[0];
    strcpy(topsub,sub[0]);
    for(i=0;i<4;i++){
        if(maxsubavg<subavg[i]){
            strcpy(topsub,sub[i]);
            maxsubavg=subavg[i];
        }
    }
    printf("\nTop Subject: %s with average %.2f",topsub,maxsubavg);
}