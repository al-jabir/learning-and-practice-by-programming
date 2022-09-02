#include<stdio.h>

void makesqr(int n)
{
    scanf("%d",&n);
    n *= n;

    printf("%d",n);
}

int main()
{
    int num;
    makesqr(num);

    return 0;
}


/**char func(int number1, double number2){
 	 // function body

	return  character ;
}
*/

/**
#include<stdio.h>
void makeSum(int a, int b, int *sum){

    *sum = a+b;
}
int main(){
    int a,b,sum;

    scanf("%d%d",&a,&b);

    makeSumOfNum(a,b,&sum);

    printf("%d",sum);

return 0;
}

*/

#include<stdio.h>

void makeArrayofN(int n, int sqr[]){
    for(int i=0;i<n;i++){

        sqr[i] = (i+1)*(i+1); // make square 1 to n
    }
}

int main(){

  int n;
  scanf("%d",&n);
  int arr[n];

  makeArrayofN(n,arr);

  for(int i = 0 ;i<n;i++){

    printf("%d ",arr[i]);
  }
return 0;
}



