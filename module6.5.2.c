#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int a,b,c;

    scanf("%d %d",&a,&b);

    if(a==5||b==5)
    {
        printf("true\n");
    }
    else if((a+b)==5)
    {
        printf("true\n");
    }
    else if(abs(a-b)==5)
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }

    return 0;
}
