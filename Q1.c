#include <stdio.h>

int main() {
    
    int h,m,s ;
    
    printf("ENTER current Hour = ");
    scanf("%d", &h);
    
    printf("ENTER current Min = ");
    scanf("%d", &m);
    
    printf("ENTER current Sec = ");
    scanf("%d", &s);
    
    printf("Current time is %d:%d:%d",h,m,s);
    
    return 0;
}