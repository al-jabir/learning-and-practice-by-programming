#include<stdio.h>

int main(){
    int n;
    printf("Enter type N: ");
    scanf("%d",&n);

    if(n>0){
        printf("Positive");
    }else if(n<0){
    printf("Negative");
    }else{
        printf("No-Negative");
    }
return 0;
}
