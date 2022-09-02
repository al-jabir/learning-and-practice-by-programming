#include<stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a, &b);
    int even = 0, odd = 0;
    for(int i=a; i<=b; i++){
        if(i%2 == 0){
            even++;
        }else{
        odd++;
        }
    }
    printf("%d %d ",even, odd);

return 0;
}
