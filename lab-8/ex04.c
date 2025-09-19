#include <stdio.h>
#define size 30
int vowelscount(char *word);
char word[size];
int main(){
    printf("Input: ");
    scanf("%[^\n]",word);
    printf("Number of vowels: %d\n",vowelscount(word));
}
int vowelscount(char word[30]){
    int count=0,i;
    for(i=0;i<size;i++){
        if(word[i]=='a' || word[i]=='e' || word[i]=='i' || word[i]=='o' || word[i]=='u'||
        word[i]=='A' || word[i]=='E' || word[i]=='I' || word[i]=='O' || word[i]=='U')
            count++;
    }
    return count;
}