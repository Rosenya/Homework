#include <stdio.h> 

int main(void) { 

    float amountPLN, rate, amountUSD;
    
    printf("Insert PLN amount:\n"); 
    scanf("%f", &amountPLN);
    printf("Insert current rate: \n");
    scanf("%f", &rate);
    while (rate == 0) {
        printf("Rate cannot be 0. Please insert again:\n");
        scanf("%f", &rate);
    }
    amountUSD = amountPLN/rate;    
    printf("Your USD amount for %.2f PLN equals %.2f\n", amountPLN, amountUSD);
    return 0;
} 