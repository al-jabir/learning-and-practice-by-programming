#include<stdio.h>

int main()
{
    int count = 0;
    long long int n;
    scanf("%lld",&n);
    while(n!=0)
    {
        if(n%10 == 7 || n%10 == 4)
        {
            count++;

        }
        n = n/10;

    }
     if(count == 4 || count ==7){
            printf("YES");
        }else{
        printf("NO");
        }
}



