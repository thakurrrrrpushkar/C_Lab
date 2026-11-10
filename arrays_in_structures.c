#include <stdio.h>
typedef struct car {
    char engine[50];
    char fuel_type[10];
    int fuel_tank_cap;
    int seating_cap;
    float city_mileage;
} car;
int main() {
    car c[2];
    int i;
    for(i = 0; i < 2; i++) {
        printf("Enter car%d's engine: ", i + 1);
        scanf("%s", c[i].engine); 
        printf("Enter car%d's fuel type: ", i + 1);
        scanf("%s", c[i].fuel_type);
        printf("Enter car%d's fuel tank capacity: ", i + 1);
        scanf("%d", &c[i].fuel_tank_cap);
        printf("Enter car%d's seating capacity: ", i + 1);
        scanf("%d", &c[i].seating_cap);
        printf("Enter car%d's city mileage: ", i + 1);
        scanf("%f", &c[i].city_mileage);
    }
    printf("\n");
    
    for(i = 0; i < 2; i++) {
        printf("\nCar%d's details: \n", i + 1);
        printf("Engine: %s\n", c[i].engine);
        printf("Fuel Type: %s\n", c[i].fuel_type);              
        printf("Fuel Tank Capacity: %d\n", c[i].fuel_tank_cap); 
        printf("Seating Capacity: %d\n", c[i].seating_cap);     
        printf("City Mileage: %.2f\n", c[i].city_mileage);       
    }
    
    return 0;
}
