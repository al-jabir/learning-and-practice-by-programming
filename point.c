#include<stdio.h>

void update(int n,char a[]){
    n++;
    a[0] = '0';
}

int main(){
    int n = 10;
    char a[] = "10000";
    update(n,a);
    printf("%d %s",n,a);
}
