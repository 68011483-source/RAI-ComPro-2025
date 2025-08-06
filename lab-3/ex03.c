#include <stdio.h>
int main()
{
    int num1,r;
    printf("Enter a number:");
    scanf("%d",&num1);
    r=num1%2;
    switch(num1>=1 && num1<=100)
    {
    case 1:
        switch(r)
        {
        case 0:
            printf("%d is even\n",num1);
            break;
        case 1:
            printf("%d is odd\n",num1);
            break;
        }
        break;
    case 0:
        printf("%d is out of range\n",num1);
        break;
    }
}
