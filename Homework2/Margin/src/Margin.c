#include <stdio.h> 

int main(void) { 

    float purchaseNet, marginPercent, sellingPrice;
    
    printf("Insert price:\n"); 
    scanf("%f", &purchaseNet);
    printf("Insert current margin: \n");
    scanf("%f", &marginPercent);
    while (marginPercent == 0) {
        printf("Margin cannot be 0. Please insert again:\n");
        scanf("%f", &marginPercent);
    }
    sellingPrice = purchaseNet + (purchaseNet*(marginPercent/100));    
    printf("Your selling price amount for %.2f%% margin equals %.2f\n", marginPercent, sellingPrice);
    return 0;
} 