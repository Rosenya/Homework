#include <stdio.h> 

int main(void) { 

    float v_ms, kn;
    
    printf("Insert wind speed in meters per second:\n"); 
    scanf("%f", &v_ms);

    do {
        kn = v_ms * 1.94384;

        if(kn < 0){
            printf("Wind speed can't be less than 0. Please insert again \n");
        scanf("%f", &v_ms);
        }        
    } while(kn < 0);
    
    printf("Wind Speed in knots is equal to: %.2f \n", kn);

    if(kn < 1) {printf("Calm \n");
    } else if((kn >= 1) && (kn < 4)){printf("Light Air \n");
    } else if((kn >= 4) && (kn < 6)){printf("Light Breeze \n");
    } else if((kn >= 7) && (kn < 11)){printf("Gentle Breeze \n");
    } else if((kn >= 11) && (kn < 17)){printf("Moderate Breeze \n");
    } else if((kn >= 17) && (kn < 22)){printf("Fresh Breeze \n");
    } else if((kn >= 22) && (kn < 27)){printf("Strong Breeze \n");
    } else if((kn >= 28) && (kn < 34)){printf("Near Gale \n");
    } else if((kn >= 34) && (kn < 41)){printf("Gale \n");
    } else if((kn >= 41) && (kn < 48)){printf("Strong Gale \n");
    } else if((kn >= 48) && (kn < 56)){printf("Storm \n");
    } else if((kn >= 56) && (kn < 64)){printf("Violent Storm \n");
    } else {printf("Hurricane \n");}
    
}
