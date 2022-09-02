
#include<stdio.h>


int main()
{
    int cntremove=0;
  int len;
  scanf("%d",&len);

  char str[len];
  scanf("%s",str);
  for(int i=0; i<len; i++){
    if(str[i] == str[i+1]){
        cntremove++;
    }

  }
 printf("%d",cntremove);
}
