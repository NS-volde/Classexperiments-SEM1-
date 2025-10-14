#include <stdio.h>

int main(){
    int a, b;

    
    printf("Enter first number (a): ");
    scanf("%d", &a);

    printf("Enter second number (b): ");
    scanf("%d", &b);

    
    printf("Bitwise AND (a & b) = %d", a & b);

    
    printf("Bitwise OR (a | b) = %d", a | b);

    
    printf("Bitwise NOT (~a) = %d", ~a);
    printf("Bitwise NOT (~b) = %d", ~b);

}