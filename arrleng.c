#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int fiba[n];
    fiba[0] = 0;
    fiba[1] = 1;

    for(int i=2; i<n; i++){
        fiba[i] = fiba[i -1] + fiba[i-2];
    }
    for(int i=0; i<n; i++){
        printf("%d ",fiba[i]);
    }

}

