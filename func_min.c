#include<stdio.h>

int getMin(int a,int b){
   if(a<b) return a;
   else    return b;
}


int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b ,&c);

    int temp = getMin(a,b);
    int temp2 = getMin(temp,c);

    printf("Result is min : %d",temp2);
}
