#include <stdio.h>

int f,s,sum ;

void selectmenu(int m) {
    switch(m) {
        case 1 :
            printf("Enter the first Integer: \n");
            scanf("%d",&f);
            printf("Enter the second Integer: \n");
            scanf("%d",&s);
            
            sum = f + s ;
            
            printf("The Addition of %d and %d is: %d\n",f,s,sum);
            break;
        case 2 :
            printf("Enter the first Integer: \n");
            scanf("%d",&f);
            printf("Enter the second Integer: \n");
            scanf("%d",&s);
            
            sum = f - s ;
            
            printf("The Substraction of %d and %d is: %d\n",f,s,sum);
            break;
        case 3 :
            printf("Enter the first Integer: \n");
            scanf("%d",&f);
            printf("Enter the second Integer: \n");
            scanf("%d",&s);
            
            sum = f * s ;
            
            printf("The Addition of %d and %d is: %d\n",f,s,sum);
            break;
        case 4 :
            printf("Enter the first Integer: \n");
            scanf("%d",&f);
            printf("Enter the second Integer: \n");
            scanf("%d",&s);
            
            sum = f / s ;
            
            printf("The Addition of %d and %d is: %d\n",f,s,sum);
            break;
        case 5 :
            printf("Exit\n");
            break;
        default :
            printf("Please choose again\n");
    }
}

int main() {
    int m;
    do{
        printf("Choose your option\n");
        printf("1.Addition\n");
        printf("2.Substraction\n");
        printf("3.Multiplication\n");
        printf("4.Division\n");
        printf("5.Exit\n");
        scanf("%d",&m);
        selectmenu(m);
        
        
    }while(m != 5);
    
    
    return 0;
}