int main() {
    
    int m,f,h ;
    float x ;
    
    printf("Mid-term : ");
    scanf("%d", &m);
    
    printf("Final : ");
    scanf("%d", &f);
    
    printf("Homework : ");
    scanf("%d", &h);
    
    x = (m/100)*40 + (f/100)*50 + (h/100)*10 ;
    
    if(x<89 && x <101) {
        printf("grade = 'A' ");
    }
    else if(x<84 && x <90) {
        printf("grade = 'B+' ");
    }
    else if(x<79 && x <85) {
        printf("grade = 'B' ");
    }
    else if(x<69 && x <80) {
        printf("grade = 'C+' ");
    }
    else if(x<59 && x <70) {
        printf("grade = 'C' ");
    }
    else if(x<54 && x <60) {
        printf("grade = 'D+' ");
    }
    else if(x<49 && x <55) {
        printf("grade = 'D' ");
    }
    else
    {
        printf("grade = 'F' ");
    }
    
    return 0;
}