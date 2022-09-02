#include <stdio.h>
#include<string.h>

int main()
{
    char a[100];
    scanf("%s",&a);
    int count[26]={0};
    int i;
    for(i=0; i<strlen(a); i++)
    {
        char val=a[i];
        count[val-'a']=1;
    }
    for(char str='a'; str<='z'; str++)
    {
        if(count[str - 'a'] == 0)
        {
            printf("NO\n");
        }
    }
    printf("YES\n");
    return 0;
}
