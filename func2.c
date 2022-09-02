#include<stdio.h>

 void printGCD(int x,y){
     printf("Input: %d %d\n",x,y);
     while(y > 0){
        int temp = x%y;
        x=y;
        y=temp;
     }
     int gcd = x;
     printf("gcd = %d\n",gcd);
 }

 int main(){
     int n,m;
     scanf("%d %d",&n,&m);
     printGCD(n,m);

 }
