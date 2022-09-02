	#include<stdio.h>

int gcd(int a, int b){
    int res;
    if (a == 0) return b;
    else{
        for(int i=1; i <= a && i <= b; i++){
            if(a%i==0 && b%i==0){
                res = i;
            }
        }
        return result;
    }
}

int main(){
    int arr[10];
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    int res = arr[0];
    for (int i = 1; i < 10; i++)
        result = gcd(arr[i], result);

    printf("%d",res);
    return 0;
}

The first printf() print :-  10  20  10 // 10 20 10
The second printf() print :- 30  20  30 // 30 20 30
The third printf() print :- 50 10 50  // 50 10 50
The forth printf() print :- 50  10  10 //50 10 10
The fifth printf() print :- 20 100 100 //20 100 100

#include<stdio.h>

void mixedOfCode(int a, int b, int c, int *min, int *max){

    if(a>b && a>c )        *max = a;
    else if(b>a && b>c)    *max = b;
    else                   *max = c;
    if(a<b && a<c )        *min = a;
    else if(b<a && b<c)    *min = b;
    else                   *min = c;
}

int main(){
    int a,b,c,min,max;

    scanf("%d %d %d",&a, &b, &c);
    mixedOfCode(a, b, c, &min, &max);

    printf("Max is = %d\n", max);
    printf("Min is = %d", min);

return 0;
}


	#include<stdio.h>
#include <string.h>
void stringCat(char a[], char b[], char out[]){
    int lenOfA = strlen(a);
    int lenOfB = strlen(b);

    for(int i=0;i<lenOfA;i++){
        out[i] = a[i];
  }
    for(int i=0;i<lenOfB;i++){
        out[i+lenOfA] = b[i];
    }
}
int main(){
    char a[101];
    char b[101];
    char out[202];

    gets(a);
    gets(b);
    stringCat(a,b,out);

    printf("%s",out);

return 0;
}

