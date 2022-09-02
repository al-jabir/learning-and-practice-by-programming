#include <stdio.h>
#include<string.h>
#include<stdbool.h>

int main()
{
    int n;
    scanf("%d",&n);
    int s = 0;
    for(int i=1; i<=n; i++)
    {
        s+=i;
    }
    printf("sum: %d",s);
    return 0;
}
