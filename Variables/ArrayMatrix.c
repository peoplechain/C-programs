#include <stdio.h>

int main() {
    // Example: Inventory Management using a 2x3 matrix
    int inventory[2][3]; // Matrix to store product IDs and quantities
    
    // Initialize inventory data
    inventory[0][0] = 101; // Product ID
    inventory[0][1] = 50;  // Quantity in stock
    inventory[0][2] = 200; // Price per unit
    
    inventory[1][0] = 202; // Product ID
    inventory[1][1] = 25;  // Quantity in stock
    inventory[1][2] = 150; // Price per unit
    
    // Displaying the inventory
    printf("Inventory Management System:\n");
   
    printf("Product ID: %d, Quantity: %d, Price: $%d\n", 
           inventory[0][0], inventory[0][1], inventory[0][2]);
    
    printf("Product ID: %d, Quantity: %d, Price: $%d\n", 
           inventory[1][0], inventory[1][1], inventory[1][2]);
    
    return 0;
}
