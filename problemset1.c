#include<stdio.h>

int main()
{
    //2
   printf("Testing...");

    printf("....1");

    printf("...2");

    printf("..3");

    printf("\n");

//3
    int sum;

    sum = 25 + 37 - 19;

    printf("The answer is %d\n",sum); //43
//6
    //printf("Hello\n\tnice\n\tto\n\tmeet\n\tyou");

    int x,y;

    scanf("%d %d",&x,&y);
    printf("%d\n",x/y);//user output //0 or error

    //7

    int height;
    printf("Enter your height type: ");
    scanf("%d",&height);

    int feet,inch;
    feet = height/12;
    inch = height%12;

    printf("Your height is %d in %d inch",feet,inch);


    return 0;
}

