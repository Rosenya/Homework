#include <stdio.h> 

int main(void) { 

    int days_in_month, first_day;
    
        printf("Insert number of days in month:\n"); 
        scanf("%d", &days_in_month);
        printf("Insert number of first day in a month(1-Sunday, 7-Saturday):\n"); 
        scanf("%d", &first_day);

    while((days_in_month <= 0) || (days_in_month > 31)){
        printf("There is only 28-31 days in a months. Please insert correct number \n");
        scanf("%d", &days_in_month);
    }

    while((first_day <= 0) || (first_day > 7)){
        printf("There is 7 days in a week. Please insert again \n");
        scanf("%d", &first_day);
    }

    printf("Su Mo Tu We Th Fr Sa\n");

    int column = 1;

    while (column < first_day) {
        printf("   ");
        column++;
    }

    int day = 1;

    while(day <= days_in_month){
        printf("%2d ", day);
        day++;
        column++;
        while(column > 7){
            printf("\n");
            column = 1;
            continue;
        }
    }  
}