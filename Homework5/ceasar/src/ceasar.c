#include <stdio.h>
#include "def_klaw.h"

int main(void) {

    int sign, k;
    
    printf("Please insert value number for encryption: \n");
    scanf("%d", &k);
    getchar();
    k = k % 26;
    if(k < 0) {
        k += 26;
    }
    printf("Please insert your text: \n");

    while ((sign = getchar()) != ENTER && sign != EOF){
        int encrypted = sign;
        if((sign >= UPPER_MIN) && (sign <= UPPER_MAX)){
            encrypted = ((sign - UPPER_MIN + k) % 26) + UPPER_MIN;
        } else if((sign >= LOWER_MIN) && (sign <= LOWER_MAX)){
            encrypted = ((sign - LOWER_MIN + k) % 26) + LOWER_MIN;        
        }
        putchar(encrypted);
    }
    printf("\n");
    return 0;
}