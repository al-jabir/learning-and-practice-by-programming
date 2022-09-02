#include<stdio.h>

int main(){
    char ch;
    printf("Enter any latter: ");
    scanf("%c",&ch);

    if(ch == 'a'|| ch == 'e'|| ch == 'i' || ch == 'o' || ch == 'u'){
        printf("vowel\n");// output
    }else{
    printf("consonant\n");// another output
    }



return 0;
}
