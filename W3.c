#include <stdio.h>

int main() {
    int f , i , sum ;
    f = 5 ;
    sum = 1 ;
    
    printf("Enter a number to calculate it's factorial %d\n",f);
    
    for (i=1 ; i <= f ; i++ ){
       sum *= i;
   }
    printf("Factorial of the num(%d) = %d",f,sum);
    return 0;
}