#include<stdio.h>

int main(){
    double value[5] = {2,5,6,8,9};
    int i;
    int sum = 0;

    for(i=0; i<5; i++){
        value[i]*=3;
    }

    for(i=0; i<5; i++){
            sum+=value[i];
        printf("%.2lf\n",value[i]);
    }
    printf("result of: %d\n",sum);

}
