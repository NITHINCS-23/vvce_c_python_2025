#include <stdio.h>
int main() {
    int num_interior_walls, num_exterior_walls;
    float surface_area_interior, surface_area_exterior;
    float total_interior_area = 0, total_exterior_area = 0;
    float total_cost;
    float interior_cost_per_sqft = 18;
    float exterior_cost_per_sqft = 12;
    printf("Enter the number of Interior walls: ");
    scanf("%d", &num_interior_walls);
    
    printf("Enter the number of Exterior walls: ");
    scanf("%d", &num_exterior_walls);
    if (num_interior_walls > 0) {
        for (int i = 0; i < num_interior_walls; i++) {
            printf("Enter the surface area of Interior wall %d in sq.ft: ", i + 1);
            scanf("%f", &surface_area_interior);
            total_interior_area += surface_area_interior;
        }
    }
    if (num_exterior_walls > 0) {
        for (int i = 0; i < num_exterior_walls; i++) {
            printf("Enter the surface area of Exterior wall %d in sq.ft: ", i + 1);
            scanf("%f", &surface_area_exterior);
            total_exterior_area += surface_area_exterior;
        }
    }
    total_cost = (total_interior_area * interior_cost_per_sqft) + (total_exterior_area * exterior_cost_per_sqft);
    printf("\nTotal estimated Cost: %.1f INR\n", total_cost);  
    return 0;
}

