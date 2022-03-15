int main() {
    
    int x,y ;
    
    printf("Enter number 1: ");
    scanf("%d", &x);
    
    printf("Enter number 2: ");
    scanf("%d", &y);
    
    if(x > y)
    {
        printf("Maximum is %d ",x);
    }
    else
    {
        printf("Maximum is %d ",y);
    }
    
    return 0;
}