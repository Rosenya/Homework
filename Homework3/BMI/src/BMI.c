#include <stdio.h> 

int main(void) { 

    float m, kg, bmi;
    
        printf("Insert your height in meters:\n"); 
        scanf("%f", &m);
        printf("Insert your weight in kilograms:\n"); 
        scanf("%f", &kg);

    do {

        if((kg < 0) || (m < 0)){
            printf("BMI can't be less than 0. Please insert again \n");
            scanf("%f", &m);
            scanf("%f", &kg);
        }        
    } while((kg < 0) || (m < 0));

    bmi = kg / (m * m) ;

    printf("Your BMI is equal to: %.1f \n", bmi);

    if(bmi < 18.5) {printf("Underweight \n");
    } else if((bmi >= 18.5) && (bmi < 25)){printf("Correct \n");
    } else if((bmi >= 25) && (bmi < 30)){printf("Overweight \n");
    } else {printf("Obesity \n");}
    
}