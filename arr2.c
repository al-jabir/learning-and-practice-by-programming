#include<stdio.h>

int main()
{
    const int n =5;
    int val[n];
    int i;

    for(i=0; i<n; i++){
       val[i] = i+1;
    }
    val[4]*=5;
     for(i=0; i<10; i++){
        printf("value[%d] = %d\n",i,val[i]);
     }
}
