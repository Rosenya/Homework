#include <stdio.h>
#include "def_klaw.h"

int main(void) {

    int sign;
    int uppercase_counter = 0;
    int lowercase_counter = 0;
    int number_counter = 0;
    int other_counter = 0;

    printf("Please insert your text: \n");

    while ((sign = getchar()) != ENTER && sign != EOF){
        if((sign >= ZERO) && (sign <= NINE)){
        number_counter++;
        } else if((sign >= UPPER_MIN) && (sign <= UPPER_MAX)){
        uppercase_counter++;
        } else if((sign >= LOWER_MIN) && (sign <= LOWER_MAX)){
        lowercase_counter++;
        } else {
        other_counter++;
        }
    }   
   
    printf("Uppercase = %d, lowercase = %d, numbers = %d, other = %d\n",
         uppercase_counter, lowercase_counter, number_counter, other_counter);

    return 0;
}