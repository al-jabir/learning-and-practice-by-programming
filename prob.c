
#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int result=0;
    for(int i=1; i<=n; i++){
            int temp;
            scanf("%d",&temp);
            if(temp<0){
                result+=1;

            }
    }

    printf("%d\n",result);
return 0;
}
