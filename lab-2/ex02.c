#include <stdio.h>
int main()
{
    int min;
    printf("Enter total minutes: ");
    scanf("%d",&min);
    printf("%d minutes is %d hour(s) and %d minute(s)",min,min/60,min%60);
}