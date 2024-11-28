#include<stdio.h>
int main()
{
    int num,original,reveresed=0,remainder;
    printf("enter a number:");
    scanf("%d",&num);
    original=num;
    while(num!=0)
    {
        remainder=num%10;
        reveresed=reveresed*10+remainder;
        num /=10;
    }
    if(original==reveresed)
{
        printf("%d is a palindrome.\n",original);
}
        else
        {
            printf("%d is not a palindrome.\n",original);
        }
        return 0;
    }
