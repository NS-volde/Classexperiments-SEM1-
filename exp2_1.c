#include <stdio.h>
int main(){
    float length,breadth;
    printf("enter the length of rectangle : ");
    scanf("%f", &length);
    printf("enter the breadth of rectangle : ");
    scanf("%f", &breadth);
    pritnf("area of rentangle : %f\n", length*breadth);
    pritnf("perimeter of rentangle : %f\n", 2*(length+breadth)); 
    return 0;
}