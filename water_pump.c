// Online C compiler to run C program online
#include <stdio.h>

void main() {
    int water_level;
    printf("Enter water level (between 0-5 or 495-500):");
    scanf("%d", &water_level);
    
    printf("You have entered %d water level\n", water_level);

    if ( water_level <= 5) {
        printf("Motor ON\n");
    } else if (water_level >= 495) {
        printf("Motor OFF\n");
    } else {
        printf("Motor OFF\n");
    }

}
