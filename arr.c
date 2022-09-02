#include<stdio.h>

int main(){
    int mark[5];
    int i;

    for(i=0; i<5; i++){
        printf("Enter student %d Mark: ",i+1);
        scanf("%d",&mark[i]);
    }
    for(i=0; i<5; i++){
        mark[i]*=3;
    }
    for(i=0; i<5;i++){
        printf("Student %d got %d marks\n",i+1,mark[i]);
    }

}
