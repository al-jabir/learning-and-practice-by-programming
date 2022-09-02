#include<stdio.h>

int main()
{
   int a,b,c;
   scanf("%d %d %d",&a,&b,&c);

   if(a == b && b ==c){
    printf("This is an Equilateral\n");
   }else if(a == b || b==c || a==c){
       printf("This is an Isosceles\n");
   }
   else{
    printf("This is an Scanlene\n");
   }
    return 0;
}
