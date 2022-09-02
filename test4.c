#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    if(n>0){
        for(int i=1; i<=n; i++){
            printf("%d ",i);
        }
        printf("\n");
    }else{
        for(int i=1; i>=n; i--){
            printf("%d ",i);
        }
        printf("\n");
    }

    return 0;
}
