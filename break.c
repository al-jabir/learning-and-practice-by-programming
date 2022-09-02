#include<stdio.h>
#include<stdbool.h>

int main(){

    while(true){
        int input;
        scanf("%d",&input);
        printf("%d",input);

        if(input != 0 || input != 1){
                printf("Stop\n");-
            break;
        }
    }

}
