#include <stdio.h>
int main(){
    float weight,height,bmi;

    printf("enter your weight(kgs): ");
    scanf("%f",&weight);
    printf("enter your height(ms): ");
    scanf("%f", &height);
    bmi=weight/(height*height);
    printf("your bmi is: %f\n", bmi);
    

    if(bmi<15.00){
        printf("STARVATION\n");
    }else if(bmi>=15.00 && bmi<17.50){
        printf("ANOREXIC\n");
    }else if(bmi>=17.6 && bmi<18.5){
        printf("UNDERWEIGHT\n");
    }else if(bmi>=18.5 && bmi<24.9){
        printf("IDEAL WEIGHT\n");
    }else if(bmi>25 && bmi<29.9){
        printf("OVERWEIGHT\n");
    }else if(bmi>30 && bmi<39.9){
        printf("OBESE\n");
    }else {
        printf("MORBIDITY OBESE\n");
    }
}

