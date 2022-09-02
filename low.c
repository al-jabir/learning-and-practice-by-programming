#include<stdio.h>

int main()
{
   char str[1000];
   scanf("%s",&str);
   //upper lower case
   if(str[0] >= 'A' && str[0]<= 'Z'){
    printf("%s",str);
   }else{
   str[0] ='A'+ str[0]-'a';
   printf("%s",str);
   }
}

