#include <stdio.h>

int main() {
    int b , e , sum ;
    printf("Enter the base: ");
    scanf("%d",&b);
    
    printf("Enter the exponent: ");
    scanf("%d",&e);
    
    sum = pow( b , e ) ;
    printf("The power of the no = %d",sum);
    
    return 0;
}