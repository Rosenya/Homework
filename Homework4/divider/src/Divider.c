#include <stdio.h> 

int main(void) { 

    int k, result;
    
        printf("Insert your number:\n"); 
        scanf("%d", &k);

    while(k <= 0){
        printf("Your number cannot be smaller than 1. Please insert again \n");
        scanf("%d", &k);
    }


    for(int i = 50; i <= 100; i++){
        result = i%k;
        while(result == 0){
            printf("%d \n", i);
            break;
        }
    }    
}