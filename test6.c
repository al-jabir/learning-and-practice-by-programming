#include<stdio.h>

int main()
{
    int x;
    scanf("%d",&x);
    int sum;
    int reversed = 0;

    while(x>0)
    {
        int digit = x%10;
        x/=10;
       reversed = reversed * 10 + digit;
        // printf("Digit= %d, %d, x = %d\n",digit,x)
    }

    printf("Reversed = %d",reversed);

    return 0;
}
