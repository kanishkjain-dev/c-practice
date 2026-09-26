#include <stdio.h> 
int main() 
{ 
    int a, b; 
    
    printf("enter two numbers: "); 
    scanf("%d%d", &a, &b); 
    
    a = a - b; 
    b = b + a; 
    a = b - a;
    
    printf("after swap: %d, %d", a, b); 
    
    return 0; 
}