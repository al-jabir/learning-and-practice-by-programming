#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int i,j;


    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++)
        {
            printf("*",i,j);

        }
        printf("\n");
    }
     for(i=n; i>=1; i--){
        for(j=1; j<=i; j++)
        {
            printf("*",i,j);

        }
        printf("\n");
    }

}
