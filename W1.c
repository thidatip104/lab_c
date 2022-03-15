int main() {
    int n , i ;
    printf("Enter a no: ");
    scanf("%d",&n);
    
    printf("Odd no. of %d terms are :-\n",n);
    {
        n = (n*2)-1 ;
        for( i=1 ; i<=n ; i+=2)
            printf("%d ",i);
    }
    
    return 0;
}