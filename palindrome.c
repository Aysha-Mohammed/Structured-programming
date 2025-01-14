#include<stdio.h>
int main()
{
    int number,reverse=0,i;
    printf("enter number:");
    scanf("%d",&number);
    for(i=number;i!=0;i/=10)
    {
        reverse=reverse*10+i%10;
    }
    if(number==reverse)
        printf("%d is palindrome",number);
    else
        printf("%d is not palindrome",number);
    return 0;
}
