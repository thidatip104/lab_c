int main() {
    
    int x ;
    int div_by = 5 ;
    
    printf("Enter x: ");
    scanf("%d", &x);
    
    if(x % div_by == 0)
    {
        printf("%d is divisible by %d ",x,div_by);
    }
    else
    {
        printf("%d is not divisible by %d ",x,div_by);
    }
    
    return 0;
}