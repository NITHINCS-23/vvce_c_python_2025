#include <stdio.h>
#include <string.h>
float calculateBill(char wardType, int days) {
    float bill = 0;
           if (wardType == 'G' || wardType == 'g') {
        bill = 1000 * days;
    } else if (wardType == 'S' || wardType == 's') {
        bill = 2000 * days; 
    } else if (wardType == 'P' || wardType == 'p') {
        bill = 5000 * days;
    } else {
        printf("Invalid ward type!\n");
        return -1; 
    }
    if (days > 7) {
        bill -= bill * 0.05; 
    }

    return bill;
}

int main() {
    char name[100], wardType;
    int days;
    float totalBill, discount, finalBill;
    printf("Enter Patient Name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';  
    printf("Enter Ward Type (G/S/P): ");
    scanf("%c", &wardType);
    printf("Enter Number of Days: ");
    scanf("%d", &days);
    totalBill = calculateBill(wardType, days);
    if (totalBill == -1) {
        return 0; 
    }
    if (days > 7) {
        discount = totalBill * 0.05;
        finalBill = totalBill - discount;
    } else {
        discount = 0;
        finalBill = totalBill;
    }
    printf("\nPatient Name: %s\n", name);
    printf("Total Bill Before Discount: ₹%.2f\n", totalBill);
    printf("Discount Applied: ₹%.2f\n", discount);
    printf("Final Bill Amount: ₹%.2f\n", finalBill);

    return 0;
}
