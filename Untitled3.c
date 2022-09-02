#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    double sm;
    for(int i=1; i<=n; i++){
        double a,b;
        scanf("%lf %lf",&a,&b);
        sm+=a*b;
    }

    printf("%.3lf\n",sm);
return 0;
}
