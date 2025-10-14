#include <stdio.h>

int main(){
    int num, leftShift, rightShift;

    printf("Enter a number: ");
    scanf("%d", &num);

    

    leftShift = num << 1;

    
    rightShift = num >> 1;

    printf("Original number = %d", num);
    printf("Left Shift (num << 1) = %d", leftShift);
    printf("Right Shift (num >> 1) = %d", rightShift);

}