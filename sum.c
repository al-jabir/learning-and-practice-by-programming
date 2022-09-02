
#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int sum = 0;
    for(int i=1; i<=n; i++)
    {
        sum+=i;
        printf(" i = %d sum = %d\n",i,sum);

    }
    printf("final sum = %d\n",sum);
    return 0;
}
