#include <stdio.h>

// Global variables for hotel management
static int totalRooms = 50;     // Total number of rooms in the hotel


int main() 

{

    // Access global variables
    extern int totalRooms;
    
    extern int occupiedRooms;

    printf("Hotel Management System\n");
    printf("=======================\n");

    printf("Total rooms in the hotel: %d\n", totalRooms);
    printf("Occupied rooms: %d\n", occupiedRooms);

    return 0;

}