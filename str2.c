#include<stdio.h>

int main(){
    printf("Enter your name: ");

    char str[100];
    gets(str);
    printf("Hello, %s\n",str);

}

