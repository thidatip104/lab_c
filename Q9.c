#include <stdio.h>

int main() {
    
    int N,i,min,max=0;
    float Mean,sum=0 ;

    printf("Enter N = ");
    scanf("%d", &N);
    
    int x[N];
    for (i = 0; i < N ; i++) {
        printf("#%d: ",i +1 ) ;
        scanf("%d",&x[i]) ;
        
        if (x[i] > max){
            max = x[i] ; 
        }
        if (x[i] < min){
            min = x[i] ;
        }
        
        sum = sum + x[i];

    }
    
    Mean = sum / (float)N ;
    printf("Mean = %2.f \n",Mean);
    printf("Maximum = %d \n",max);
    printf("Miniimum = %d \n",min);
    
    return 0;
}