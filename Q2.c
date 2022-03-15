#include <stdio.h>

int main() {
    
    int x1,x2,x3,x4 ;
    float sum,Mean ;
    
    printf("number = ");
    scanf("%d", &x1);
    
    printf("number = ");
    scanf("%d", &x2);
    
    printf("number = ");
    scanf("%d", &x3);
    
    printf("number = ");
    scanf("%d", &x4);
    
    sum = (x1+x2+x3+x4) ;
    Mean = sum/4;
    
    printf("Mean = %.2f",Mean);
    
    return 0;
}